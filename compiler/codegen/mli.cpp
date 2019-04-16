/*
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cstring>
#include "library.h"
#include "ModuleSymbol.h"
#include "FnSymbol.h"
#include "beautify.h"
#include "codegen.h"
#include "driver.h"
#include "expr.h"
#include "stlUtil.h"
#include "stringutil.h"

//
// TODO: Multi-Locale Interop prototype code!
//
// I decided to make a separate source file just to handle generation of the
// MLI wrapper code (this includes RPC and marshalling).
//
// --
// --
// --
//

const char* out_mli_marshalling = "chpl_mli_marshalling";
const char* out_mli_client_bundle = "chpl_mli_client_bundle";
const char* out_mli_server_bundle = "chpl_mli_server_bundle";

// Correspond to global ZMQ socket names in client/server runtimes.
static const char* client_main = "chpl_client.main";
static const char* client_arg = "chpl_client.arg";
static const char* client_res = "chpl_client.res";
static const char* server_main = "chpl_server.main";
static const char* server_arg = "chpl_server.arg";
static const char* server_res = "chpl_server.res";

class MLIContext {
private:

  bool injectDebugPrintlines;
  bool separateHeaders;
  std::vector<FnSymbol*> exps;
  std::vector<FnSymbol*> throws;
  std::map<Type*, int64_t> tmap;
  fileinfo fiMarshalling;
  fileinfo fiClientBundle;
  fileinfo fiServerBundle;
  GenInfo* info;

public:

  MLIContext(bool injectDebugPrintlines=false, bool separateHeaders=false);
  ~MLIContext();

  void emit(ModuleSymbol* md);
  void emit(FnSymbol* fn);
  const std::vector<FnSymbol*>& getExports(void);
  const std::map<Type*, int64_t>& getTypeMap(void);
  void emitClientPrelude(void);
  void emitServerPrelude(void);
  void emitMarshallingRoutines(const std::map<Type*, int64_t>& tmap);
  void emitServerMain(const std::vector<FnSymbol*>& fns);

private:

  void setOutput(fileinfo* fi);
  void setOutputAndWrite(fileinfo* fi, const std::string& out);
  void write(const std::string& code);
  int64_t assignUniqueTypeID(Type* tp);
  void emitClientWrapper(FnSymbol* fn);
  void emitServerWrapper(FnSymbol* fn);

private:

  std::string genServerDispatchSwitch(const std::vector<FnSymbol*>& fns);
  std::string genFuncToSetServerGlobals(void);
  std::string genClientCallPrologue(FnSymbol* fn);
  std::string genClientCallEpilogue(FnSymbol *fn);
  std::string genDebugPrintCall(FnSymbol* fn, const char* pfx="");
  std::string genFunctionNumericID(FnSymbol* fn);
  std::string genServerWrapperCall(FnSymbol* fn);
  std::string genClientsideRPC(FnSymbol* fn);
  std::string genServersideRPC(FnSymbol* fn);

};

//
// This is the main entrypoint for MLI code generation, call this if the
//  necessary conditions are met in codegen().
// --
//
void codegenMultiLocaleInteropWrappers(void) {
  Vec<ModuleSymbol*> &mds = allModules;

  // Insert all kinds of debug printlines into generated code for now.
  MLIContext mli(true);

  mli.emitClientPrelude();
  mli.emitServerPrelude();

  forv_Vec(ModuleSymbol, md, mds) {
    mli.emit(md);
  }

  // These pieces have to be called manually after we're done.
  const std::vector<FnSymbol*>& exps = mli.getExports();
  const std::map<Type*, int64_t>& tmap = mli.getTypeMap();

  mli.emitMarshallingRoutines(tmap);
  mli.emitServerMain(exps);

  return;
}

MLIContext::MLIContext(bool injectDebugPrintlines, bool separateHeaders) {

  // Yes, I know this isn't the most optimal way to initialize these!
  this->injectDebugPrintlines = injectDebugPrintlines;
  this->separateHeaders = separateHeaders;

  openCFile(&this->fiMarshalling, out_mli_marshalling, "c");
  openCFile(&this->fiClientBundle, out_mli_client_bundle, "c");
  openCFile(&this->fiServerBundle, out_mli_server_bundle, "c");
  this->info = gGenInfo;

  return;
}

MLIContext::~MLIContext() {

  // Don't beautify YET!
  closeCFile(&this->fiMarshalling, false);
  closeCFile(&this->fiClientBundle, false);
  closeCFile(&this->fiServerBundle, false);

  return;
}

void MLIContext::emit(ModuleSymbol* md) {
  if (md->modTag == MOD_INTERNAL) { return; }

  const std::vector<FnSymbol*> fns = md->getTopLevelFunctions(true);

  for_vector(FnSymbol, fn, fns) {
    this->emit(fn);
    this->exps.push_back(fn);
    // We might like to generate bridge code for exceptions later.
    if (fn->throwsError()) { this->throws.push_back(fn); }
  }

  return;
}

void MLIContext::emit(FnSymbol* fn) {
  if (not fn->hasFlag(FLAG_EXPORT) || fn->hasFlag(FLAG_GEN_MAIN_FUNC)) {
    return;
  }
 
  this->emitClientWrapper(fn);
  this->emitServerWrapper(fn);

  return;
}

const std::vector<FnSymbol*>& MLIContext::getExports(void) {
  return this->exps;
}

const std::map<Type*, int64_t>& MLIContext::getTypeMap(void) {
  return this->tmap;
}

void MLIContext::emitClientPrelude(void) {
  std::string out;

  // Big ol' chunk of includes about sums this function up.
  out += "// Fairly ubiquitous in C, I'd say...\n";
  out += "#include <stdlib.h>\n";
  out += "#include <stdio.h>\n";
  out += "// Contains all compiler generated and runtime visible types!\n";
  out += "#include \"chpl__header.h\"\n";
  out += "// Generated marshalling routines using ZMQ are here.\n";
  out += "#include \"chpl_mli_marshalling.c\"\n";
  out += "// NOTE: We currently use Makefile magic to make this visible!\n";
  out += "#include \"mli_client_runtime.c\"\n";
  out += "\n";

  this->setOutputAndWrite(&this->fiClientBundle, out);

  return;
}

std::string MLIContext::genFuncToSetServerGlobals(void) {
  std::string out;

  out += "void chpl_mli_server_set_conf(void) {\n";
  out += "\tchpl_server_conf.debug = ";
  out += this->injectDebugPrintlines ? "1" : "0";
  out += ";\n";
  out += "}\n";
  
  return out;
}

void MLIContext::emitServerPrelude(void) {
  std::string out;

  out += "// Fairly ubiquitous in C, I'd say...\n";
  out += "#include <stdlib.h>\n";
  out += "#include <stdio.h>\n";
  out += "// Generated marshalling routines using ZMQ are here.\n";
  out += "#include \"chpl_mli_marshalling.c\"\n";
  out += "// NOTE: We currently use Makefile magic to make this visible!\n";
  out += "#include \"mli_server_runtime.c\"\n";
  out += "// Server wraps around the normally generated bundle.\n";
  out += "#include \"_main.c\"\n";
  out += "\n";
  
  // The server will call this function to set globals appropriately.
  out += this->genFuncToSetServerGlobals();
  out += "\n";

  this->setOutputAndWrite(&this->fiServerBundle, out);

  return;
}

//
// TODO
//
// Generate marshalling routines for every key value pair in this map. For
// safety, assert that every value (int64 value) is unique?
//
// Marshalling routines are generated according to a simple algorithm which
// is reminiscent of how cycles are detected when verifying the members
// of value types (I'd think? Well, we shall soon find out).
// --
//
void
MLIContext::emitMarshallingRoutines(const std::map<Type*, int64_t>& tmap) {
  return;
}

//
// TODO
//
// The server main consists of some initialization code, followed by a listen
// loop on the inbound socket port.
//
// Within the listen loop, the server waits for an int64 to be read off the
// wire. This int64 contains the unique number of a given function that is
// assigned at code generation.
//
// After receiving the ID of the function to call, the server passes the ID
// to a giant switch.
//
// Each exported function has a case in this switch. The body of the case is
// a call to the server wrapper for that function.
//
// The wrapper to call can be found by "chpl_mli_swrapper_" + str(ID).
// The wrapper takes the inbound ZMQ port as an argument.
//
// The process of implementing the inbound RPC protocol is invisible to the
// main function, it is nothing more than a glorified switch.
//
// We will need a function which enables the user to remotely shut down the
// server.
// --
//
void MLIContext::emitServerMain(const std::vector<FnSymbol*>& fns) {
  std::string out;

  // The dispatch switch is in a separate function for now.
  out += this->genServerDispatchSwitch(fns);
  out += "\n";
  
  this->setOutputAndWrite(&this->fiServerBundle, out);

  return;
}

void MLIContext::setOutput(fileinfo* fi) {
  this->info->cfile = fi->fptr;
  return;
}

void MLIContext::setOutputAndWrite(fileinfo* fi, const std::string& out) {
  this->setOutput(fi);
  this->write(out);
}

void MLIContext::write(const std::string& out) {
  fprintf(this->info->cfile, out.c_str());
  return;
}

//
// TODO
//
// This should assign a unique ID to every new _fully qualified type_
// encountered, and return the already assigned ID otherwise.
//
// Use it to lazily stash IDs.
//
// The map built from repeated calls to this function can be used to
// generate marshalling routines for all types in the map.
//
// --
//
int64_t MLIContext::assignUniqueTypeID(Type* tp) {
  return 0;
}

//
// Assumes scope level is 1 (and generates 1 tab).
//
std::string MLIContext::genClientCallPrologue(FnSymbol* fn) {
  std::string out;

  out += "\tint64_t id = ";
  out += this->genFunctionNumericID(fn);
  out += ";\n";

  if (this->injectDebugPrintlines) {
    out += "\t";
    out += this->genDebugPrintCall(fn, "[Client]");
    out += "\n";
  }
    
  out += "\tchpl_mli_push(chpl_client.main, &id, sizeof(id), 0);\n";
  
  return out;
}

//
// Assumes scope level is 1 (and generates 1 tab).
//
std::string MLIContext::genClientCallEpilogue(FnSymbol* fn) {
  std::string out;

  out += "\tint64_t st = 0;\n";
  out += "\tchpl_mli_pull(chpl_client.main, &st, sizeof(st), 0);\n";
  out += "\tif (st) { ;;; } // TODO: Handle server errors.\n";

  return out;
}

//
// TODO
//
// Client wrappers need access to the outbound ZMQ port. We can expose this
// in the marshalling header or just roll it into the top of the client
// library wrapper.
//
// The outbound ZMQ connection needs to be initialized by calling an init
// function. The connection also needs to be closed so that the server can
// be killed off. Is this a separate function from library init, or not?
//
// Client wrappers implement the outbound half of the RPC protocol, which is
// as follows:
//
//  0. Allocate space for the return type on the stack.
//  1. Push this function's unique ID onto the wire.
//  2. For each formal, emit a call to the appropriate marshalling pack
//      routine. These are generated lazily for each new type as requested.
//      Outside of primitive types, these are implemented in terms of each
//      other, so the only thing that need be known is the name (to emit
//      the call).
//  3. Call the appropriate unpack routine for the return type.
//  4. Return.
//
void MLIContext::emitClientWrapper(FnSymbol* fn) {
  std::string out;

  this->setOutput(&this->fiClientBundle);
  fn->codegenHeaderC();

  out += " ";
  out += "{\n";
  out += this->genClientCallPrologue(fn);
  out += "\n";
  //
  // TODO: Clientside RPC here!
  //
  out += this->genClientCallEpilogue(fn);
  out += "}\n";
  out += "\n";

  this->write(out);
  
  return;
}

//
// TODO
//
// Server wrappers need access to the inbound ZMQ port. We can expose this
// in the marshalling header or just roll it into server main.
//
// The inbound ZMQ connection is a bit different, not sure of how the two-way
// handshake will take place yet.
//
// Server wrappers implement the inbound half of the RPC protocol, which is
// as follows:
//
//  0. Allocate space for all parameters and the return type on the stack.
//  1. For each formal, emit a call to the appropriate marshalling unpack
//      these are generated lazily for each new type as requested. Outside
//      of primitive types, these are implemented in terms of each other,
//      so the only thing that need be known is the name (to emit the call).
//  2. Pass the unpacked parameters to the actual implementation of the
//      function hosted by the server.
//  3. The result of the call is stored in the temporary allocated earlier.
//  4. Emit a call to the appropriate marshalling pack routine for the
//      return type.
//  5. Return.
//
void MLIContext::emitServerWrapper(FnSymbol* fn) {
  std::string out;

  // Big long, silly block of manual code generation.
  out += "// ";
  out += toString(fn);
  out += "\n";
  out += "int64_t chpl_mli_swrapper_";
  out += std::to_string((int64_t) fn->id);
  out += "(void) ";
  out += "{\n";
  
  //
  // TODO: Inbound RPC code generated here.
  //
  out += this->genServersideRPC(fn);
  
  out += "\treturn 0;\n";
  out += "}\n";
  out += "\n";

  this->setOutputAndWrite(&this->fiServerBundle, out);
 
  return;
}

std::string MLIContext::genDebugPrintCall(FnSymbol* fn, const char* pfx) {
  std::string out;

  out += "printf(\"";

  if (pfx && pfx != "") {
    out += pfx;
    out += " ";
  }

  out += "Calling: %%s\\n\", \"";
  out += toString(fn);
  out += "\");";

  return out;
}

std::string MLIContext::genFunctionNumericID(FnSymbol* fn) {
  return std::to_string((int64_t) fn->id);
}

//
// The arg socket (subscribe to) is: "chpl_server.arg"
// The res socket (publish to) is: "chpl_server.res"
//
std::string MLIContext::genServerWrapperCall(FnSymbol* fn) {
  std::string out;

  out += "chpl_mli_swrapper_";
  out += genFunctionNumericID(fn);
  out += "();";

  return out;
}
  
//
// TODO
//
// This is about as simple as it gets, just a switch on the unique ID read
// from the inbound ZMQ port.
//
// The serverside wrapper to call is implicit in the function ID. The naming
// convention is: "chpl_mli_swrapper_" + str(id)
//
// For now, the default case should halt. Later, it should communicate an
// error to the client.
//
std::string
MLIContext::genServerDispatchSwitch(const std::vector<FnSymbol*>& fns) {
  std::string out;

  out += "int64_t chpl_mli_sdispatch";
  out += "(int64_t function) {\n";
  out += "\tint err = 0;\n";
  out += "\n";
  out += "\tswitch (function) {\n";

  for_vector(FnSymbol, fn, fns) {
    if (not fn->hasFlag(FLAG_EXPORT) || fn->hasFlag(FLAG_GEN_MAIN_FUNC)) {
      continue;
    }

    out += "\tcase ";
    out += genFunctionNumericID(fn);
    out += ": ";

    if (this->injectDebugPrintlines) {
      out += "{\n";
      out += "\t\t";
      out += this->genDebugPrintCall(fn, "[MLI-Server]");
      out += "\n";
      out += "\t\terr = ";
      out += genServerWrapperCall(fn);
      out += "\n";
      out += "\t} break;\n";
    } else {
      out += "err = ";
      out += genServerWrapperCall(fn);
      out += " break;\n";
    }
  }

  out += "\tdefault: return CHPL_MLI_ERROR_NOFUNC; break;\n";
  out += "\t}\n";
  out += "\n";
  out += "\treturn err;\n";
  out += "}\n";

  return out;
}

std::string MLIContext::genClientsideRPC(FnSymbol* fn) {


}

//
//
//
std::string MLIContext::genServersideRPC(FnSymbol* fn) {


}

