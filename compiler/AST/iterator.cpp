#include "astutil.h"
#include "bb.h"
#include "expr.h"
#include "stmt.h"
#include "iterator.h"
#include "optimizations.h"
#include "view.h"


static void
updateOneSymbol(FnSymbol* fn, Symbol* s1, Symbol* s2) {
  ASTMap map;
  map.put(s1, s2);
  update_symbols(fn, &map);
}


//#define DEBUG_LIVE


IteratorInfo::IteratorInfo() :
  classType(NULL),
  getHeadCursor(NULL),
  getNextCursor(NULL),
  isValidCursor(NULL),
  getValue(NULL)
{}


static FnSymbol*
buildEmptyIteratorMethod(char* name, ClassType* ct) {
  FnSymbol* fn = new FnSymbol(name);
  fn->copyPragmas(fn);
  fn->addPragma("auto ii");
  fn->global = true;
  fn->insertFormalAtTail(new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken));
  fn->_this = new ArgSymbol(INTENT_BLANK, "this", ct);
  fn->insertFormalAtTail(fn->_this);
  return fn;
}


static VarSymbol* newTemp(FnSymbol* fn, Type* type, char* name = "_tmp") {
  VarSymbol* var = new VarSymbol(name, type);
  var->isCompilerTemp = true;
  fn->insertAtHead(new DefExpr(var));
  return var;
}


void prototypeIteratorClass(FnSymbol* fn) {
  currentLineno = fn->lineno;
  currentFilename = fn->filename;

  IteratorInfo* ii = new IteratorInfo();
  fn->iteratorInfo = ii;

  ii->classType = new ClassType(CLASS_CLASS);
  char* className = astr("_ic_", fn->name);
  if (fn->_this)
    className = astr(className, "_", fn->_this->type->symbol->cname);
  TypeSymbol* cts = new TypeSymbol(className, ii->classType);
  cts->addPragma("iterator class");
  fn->defPoint->insertBefore(new DefExpr(cts));

  Type* cursorType = dtInt[INT_SIZE_32];
  ii->getHeadCursor = buildEmptyIteratorMethod("getHeadCursor", ii->classType);
  ii->getHeadCursor->retType = cursorType;

  ii->getNextCursor = buildEmptyIteratorMethod("getNextCursor", ii->classType);
  ii->getNextCursor->retType = cursorType;
  ii->getNextCursor->insertFormalAtTail(
    new ArgSymbol(INTENT_BLANK, "cursor", cursorType));

  ii->isValidCursor = buildEmptyIteratorMethod("isValidCursor", ii->classType);
  ii->isValidCursor->retType = dtBool;
  ii->isValidCursor->insertFormalAtTail(
    new ArgSymbol(INTENT_BLANK, "cursor", cursorType));

  ii->getValue = buildEmptyIteratorMethod("getValue", ii->classType);
  ii->getValue->retType = fn->retType;
  ii->getValue->insertFormalAtTail(
    new ArgSymbol(INTENT_BLANK, "cursor", cursorType));

  ii->getZipCursor1 = buildEmptyIteratorMethod("getZipCursor1", ii->classType);
  ii->getZipCursor1->retType = cursorType;

  ii->getZipCursor2 = buildEmptyIteratorMethod("getZipCursor2", ii->classType);
  ii->getZipCursor2->retType = cursorType;
  ii->getZipCursor2->insertFormalAtTail(
    new ArgSymbol(INTENT_BLANK, "cursor", cursorType));

  ii->getZipCursor3 = buildEmptyIteratorMethod("getZipCursor3", ii->classType);
  ii->getZipCursor3->retType = cursorType;
  ii->getZipCursor3->insertFormalAtTail(
    new ArgSymbol(INTENT_BLANK, "cursor", cursorType));

  fn->defPoint->insertBefore(new DefExpr(ii->getHeadCursor));
  fn->defPoint->insertBefore(new DefExpr(ii->getNextCursor));
  fn->defPoint->insertBefore(new DefExpr(ii->isValidCursor));
  fn->defPoint->insertBefore(new DefExpr(ii->getValue));
  fn->defPoint->insertBefore(new DefExpr(ii->getZipCursor1));
  fn->defPoint->insertBefore(new DefExpr(ii->getZipCursor2));
  fn->defPoint->insertBefore(new DefExpr(ii->getZipCursor3));

  ii->classType->defaultConstructor = fn;
  ii->classType->scalarPromotionType = fn->retType;
  fn->retType = ii->classType;
}


static void
buildGetNextCursor(FnSymbol* fn,
                   Vec<BaseAST*>& asts,
                   Map<Symbol*,Symbol*>& local2field,
                   Vec<Symbol*>& locals) {
  IteratorInfo* ii = fn->iteratorInfo;
  Symbol *iterator, *cursor, *t1;

  Vec<Symbol*> labels;
  iterator = ii->getNextCursor->getFormal(1);
  cursor = ii->getNextCursor->getFormal(2);
  for_alist(Expr, expr, fn->body->body)
    ii->getNextCursor->insertAtTail(expr->remove());
  Symbol* end = new LabelSymbol("_end");

  // change yields to labels and gotos
  int i = 2; // 1 = not started, 0 = finished
  forv_Vec(BaseAST, ast, asts) {
    if (CallExpr* call = dynamic_cast<CallExpr*>(ast)) {
      if (call->isPrimitive(PRIMITIVE_YIELD)) {
        call->insertBefore(new CallExpr(PRIMITIVE_MOVE, cursor, new_IntSymbol(i)));
        call->insertBefore(new GotoStmt(goto_normal, end));
        Symbol* label = new LabelSymbol(astr("_jump_", istr(i)));
        call->insertBefore(new DefExpr(label));
        labels.add(label);
        call->remove();
        i++;
      } else if (call->isPrimitive(PRIMITIVE_RETURN)) {
        call->insertBefore(new CallExpr(PRIMITIVE_MOVE, cursor, new_IntSymbol(0)));
        call->remove(); // remove old return
      }
    }
  }
  ii->getNextCursor->insertAtTail(new DefExpr(end));

  // insert jump table at head of getNextCursor
  i = 2;
  t1 = newTemp(ii->getNextCursor, dtBool);
  forv_Vec(Symbol, label, labels) {
    ii->getNextCursor->insertAtHead(new CondStmt(new SymExpr(t1), new GotoStmt(goto_normal, label)));
    ii->getNextCursor->insertAtHead(new CallExpr(PRIMITIVE_MOVE, t1, new CallExpr(PRIMITIVE_EQUAL, cursor, new_IntSymbol(i++))));
  }

  // load local variables from fields at return points and update
  // fields when local variables change
  forv_Vec(Symbol, local, locals) {
    Symbol* field = local2field.get(local);
    if (dynamic_cast<ArgSymbol*>(local)) {
      Symbol* newlocal = newTemp(ii->getNextCursor, local->type, local->name);
      ASTMap map;
      map.put(local, newlocal);
      update_symbols(ii->getNextCursor, &map);
      local = newlocal;
    }
    ii->getNextCursor->insertAtHead(new CallExpr(PRIMITIVE_MOVE, local, new CallExpr(PRIMITIVE_GET_MEMBER, iterator, field)));
    if (isRecordType(local->type)) {
      SymExpr* newuse = new SymExpr(local);
      ii->getNextCursor->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, iterator, field, newuse));
      local->uses.add(newuse);
    } else {
      forv_Vec(SymExpr, se, local->defs) {
        if (CallExpr* parent = dynamic_cast<CallExpr*>(se->parentExpr)) {
          SymExpr* newuse = new SymExpr(local);
          parent->getStmtExpr()->insertAfter(new CallExpr(PRIMITIVE_SET_MEMBER, iterator, field, newuse));
          local->uses.add(newuse);
        }
      }
    }
  }
  t1 = newTemp(ii->getNextCursor, ii->getNextCursor->retType);
  ii->getNextCursor->insertAtTail(new CallExpr(PRIMITIVE_MOVE, t1, cursor));
  ii->getNextCursor->insertAtTail(new CallExpr(PRIMITIVE_RETURN, t1));
}


static void
buildGetHeadCursor(FnSymbol* fn) {
  IteratorInfo* ii = fn->iteratorInfo;
  Symbol *iterator, *t1;
  iterator = ii->getHeadCursor->getFormal(1);
  t1 = newTemp(ii->getHeadCursor, ii->getHeadCursor->retType);
  ii->getHeadCursor->insertAtTail(new CallExpr(PRIMITIVE_MOVE, t1, new CallExpr(ii->getNextCursor, iterator, new_IntSymbol(1))));
  ii->getHeadCursor->insertAtTail(new CallExpr(PRIMITIVE_RETURN, t1));
}


static void
buildIsValidCursor(FnSymbol* fn) {
  IteratorInfo* ii = fn->iteratorInfo;
  Symbol *cursor, *t1;
  cursor = ii->isValidCursor->getFormal(2);
  t1 = newTemp(ii->isValidCursor, dtBool);
  ii->isValidCursor->insertAtTail(new CallExpr(PRIMITIVE_MOVE, t1, new CallExpr(PRIMITIVE_NOTEQUAL, cursor, new_IntSymbol(0))));
  ii->isValidCursor->insertAtTail(new CallExpr(PRIMITIVE_RETURN, t1));
}


static void
buildGetValue(FnSymbol* fn, Symbol* value) {
  IteratorInfo* ii = fn->iteratorInfo;
  Symbol *iterator, *t1;
  iterator = ii->getValue->getFormal(1);
  t1 = newTemp(ii->getValue, ii->getValue->retType);
  ii->getValue->insertAtTail(
    new CallExpr(PRIMITIVE_MOVE, t1,
      new CallExpr(PRIMITIVE_GET_MEMBER, iterator, value)));
  ii->getValue->insertAtTail(new CallExpr(PRIMITIVE_RETURN, t1));
}


static void
buildDefaultZipMethods(FnSymbol* fn) {
  IteratorInfo* ii = fn->iteratorInfo;
  Symbol *iterator, *cursor, *t1;

  //
  // getZipCursor1 == getHeadCursor
  //
  iterator = ii->getZipCursor1->getFormal(1);
  t1 = newTemp(ii->getZipCursor1, ii->getZipCursor1->retType);
  ii->getZipCursor1->insertAtTail(
    new CallExpr(PRIMITIVE_MOVE, t1,
      new CallExpr(ii->getHeadCursor, iterator)));
  ii->getZipCursor1->insertAtTail(new CallExpr(PRIMITIVE_RETURN, t1));
  ii->getZipCursor1->addPragma("inline");

  //
  // getZipCursor2 is NOOP
  //
  iterator = ii->getZipCursor2->getFormal(1);
  cursor = ii->getZipCursor2->getFormal(2);
  t1 = newTemp(ii->getZipCursor2, ii->getZipCursor2->retType);
  ii->getZipCursor2->insertAtTail(new CallExpr(PRIMITIVE_MOVE, t1, cursor));
  ii->getZipCursor2->insertAtTail(new CallExpr(PRIMITIVE_RETURN, t1));
  ii->getZipCursor2->addPragma("inline");

  //
  // getZipCursor3 == getNextCursor
  //
  iterator = ii->getZipCursor3->getFormal(1);
  cursor = ii->getZipCursor3->getFormal(2);
  t1 = newTemp(ii->getZipCursor3, ii->getZipCursor3->retType);
  ii->getZipCursor3->insertAtTail(
    new CallExpr(PRIMITIVE_MOVE, t1,
      new CallExpr(ii->getNextCursor, iterator, cursor)));
  ii->getZipCursor3->insertAtTail(new CallExpr(PRIMITIVE_RETURN, t1));
  ii->getZipCursor3->addPragma("inline");
}


//
// Determines that an iterator has a single loop with a single yield
// in it by checking the following conditions:
//
//   1. There is exactly one for-loop and no other loops.
//   2. The single for-loop is top-level to the function.
//   3. There is exactly one yield.
//   4. The single yield is top-level to the for-loop.
//   5. There are no goto statements.
//
// I believe these conditions can be relaxed.
//
static CallExpr*
isSingleLoopIterator(FnSymbol* fn, Vec<BaseAST*>& asts) {
  BlockStmt* singleFor = NULL;
  CallExpr* singleYield = NULL;
  forv_Vec(BaseAST, ast, asts) {
    if (CallExpr* call = dynamic_cast<CallExpr*>(ast)) {
      if (call->isPrimitive(PRIMITIVE_YIELD)) {
        if (singleYield) {
          return NULL;
        } else if (BlockStmt* block = dynamic_cast<BlockStmt*>(call->parentExpr)) {
          if (block->loopInfo &&
              (block->loopInfo->isPrimitive(PRIMITIVE_LOOP_FOR) ||
               block->loopInfo->isPrimitive(PRIMITIVE_LOOP_C_FOR) ||
               block->loopInfo->isPrimitive(PRIMITIVE_LOOP_WHILEDO))) {
            singleYield = call;
          } else {
            return NULL;
          }
        } else {
          return NULL;
        }
      }
    } else if (BlockStmt* block = dynamic_cast<BlockStmt*>(ast)) {
      if (block->loopInfo) {
        if (singleFor) {
          return NULL;
        } else if ((block->loopInfo->isPrimitive(PRIMITIVE_LOOP_FOR) ||
                    block->loopInfo->isPrimitive(PRIMITIVE_LOOP_C_FOR) ||
                    block->loopInfo->isPrimitive(PRIMITIVE_LOOP_WHILEDO)) &&
                   block->parentExpr == fn->body) {
          singleFor = block;
        } else {
          return NULL;
        }
      }
    } else if (ast->astType == STMT_GOTO) {
      return NULL;
    }
  }
  if (singleFor && singleYield)
    return singleYield;
  else
    return NULL;
}


//
// Builds the iterator interface methods for a single loop iterator as
// determined by isSingleLoopIterator.
//
// A single loop iterator has the form:
//
//  iterator foo() {
//    BLOCK I
//    for loop {
//      BLOCK II
//      yield statement
//      BLOCK III
//    }
//    BLOCK IV
//  }
//
static void
buildSingleLoopMethods(FnSymbol* fn,
                       Vec<BaseAST*>& asts,
                       Map<Symbol*,Symbol*>& local2field,
                       Vec<Symbol*>& locals,
                       Symbol* value,
                       CallExpr* yield) {
  IteratorInfo* ii = fn->iteratorInfo;
  BlockStmt* loop = dynamic_cast<BlockStmt*>(yield->parentExpr);

  Symbol* headIterator = ii->getHeadCursor->getFormal(1);
  Symbol* nextIterator = ii->getNextCursor->getFormal(1);
  Symbol* zip1Iterator = ii->getZipCursor1->getFormal(1);
  Symbol* zip2Iterator = ii->getZipCursor2->getFormal(1);
  Symbol* zip3Iterator = ii->getZipCursor3->getFormal(1);

  ASTMap headCopyMap; // copy map of iterator to getHeadCursor
  ASTMap zip1Map;     // copy map of iterator to getZipCursor1
  ASTMap zip2Map;     // copy map of iterator to getZipCursor2
  ASTMap zip3Map;     // copy map of iterator to getZipCursor3
                      // note: there is no map for getNextCursor since
                      // the asts are moved (not copied) to
                      // getNextCursor

  //
  // add local variable defs to iterator methods that need them
  //
  forv_Vec(BaseAST, ast, asts) {
    if (DefExpr* def = dynamic_cast<DefExpr*>(ast)) {
      if (dynamic_cast<ArgSymbol*>(def->sym))
        continue;
      ii->getNextCursor->insertAtHead(def->remove());
      ii->getHeadCursor->insertAtHead(def->copy(&headCopyMap));
      ii->getZipCursor1->insertAtHead(def->copy(&zip1Map));
      ii->getZipCursor2->insertAtHead(def->copy(&zip2Map));
      ii->getZipCursor3->insertAtHead(def->copy(&zip3Map));
    }
  }

  //
  // add BLOCK I to getHeadCursor method
  // copy BLOCK I to getZipCursor1 method
  //
  for_alist(Expr, expr, fn->body->body) {
    if (expr == loop)
      break;
    ii->getHeadCursor->insertAtTail(expr->copy(&headCopyMap));
    ii->getZipCursor1->insertAtTail(expr->copy(&zip1Map));
    expr->remove();
  }

  if (loop->loopInfo->isPrimitive(PRIMITIVE_LOOP_C_FOR)) {
  }

  //
  // add BLOCK III to getNextCursor method
  // add BLOCK III to getZipCursor3 method
  //
  bool postYield = false;
  for_alist(Expr, expr, loop->body) {
    if (!postYield) {
      if (expr == yield)
        postYield = true;
      continue;
    }
    ii->getNextCursor->insertAtTail(expr->remove());
    ii->getZipCursor3->insertAtTail(expr->copy(&zip3Map));
  }

  Symbol* cloopHeadCond = NULL;
  Symbol* cloopNextCond = NULL;
  Symbol* cloopZip2Cond = NULL;
  if (loop->loopInfo->isPrimitive(PRIMITIVE_LOOP_C_FOR)) {
    cloopHeadCond = new VarSymbol("_cond", dtBool);
    cloopNextCond = new VarSymbol("_cond", dtBool);
    cloopZip2Cond = new VarSymbol("_cond", dtBool);
    ii->getHeadCursor->insertAtTail(new DefExpr(cloopHeadCond));
    ii->getNextCursor->insertAtTail(new DefExpr(cloopNextCond));
    ii->getZipCursor2->insertAtTail(new DefExpr(cloopZip2Cond));
    ii->getHeadCursor->insertAtTail(new CallExpr(PRIMITIVE_MOVE, loop->loopInfo->get(1)->copy(&headCopyMap), loop->loopInfo->get(2)->copy(&headCopyMap)));
    ii->getHeadCursor->insertAtTail(new CallExpr(PRIMITIVE_MOVE, cloopHeadCond, new CallExpr(PRIMITIVE_LESSOREQUAL, loop->loopInfo->get(1)->copy(&headCopyMap), loop->loopInfo->get(3)->copy(&headCopyMap))));

    Symbol* counter = dynamic_cast<SymExpr*>(loop->loopInfo->get(1))->var;
    ii->getZipCursor1->insertAtTail(new CallExpr(PRIMITIVE_MOVE, zip1Map.get(counter), loop->loopInfo->get(2)->copy(&zip1Map)));
    ii->getZipCursor1->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, zip1Iterator, local2field.get(counter), zip1Map.get(counter)));

    ii->getNextCursor->insertAtTail(new CallExpr(PRIMITIVE_MOVE, loop->loopInfo->get(1)->copy(), new CallExpr(PRIMITIVE_ADD, loop->loopInfo->get(1)->copy(), loop->loopInfo->get(4)->copy())));
    ii->getNextCursor->insertAtTail(new CallExpr(PRIMITIVE_MOVE, cloopNextCond, new CallExpr(PRIMITIVE_LESSOREQUAL, loop->loopInfo->get(1)->copy(), loop->loopInfo->get(3)->copy())));
    ii->getZipCursor3->insertAtTail(new CallExpr(PRIMITIVE_MOVE, loop->loopInfo->get(1)->copy(&zip3Map), new CallExpr(PRIMITIVE_ADD, loop->loopInfo->get(1)->copy(&zip3Map), loop->loopInfo->get(4)->copy(&zip3Map))));
    ii->getZipCursor3->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, zip3Iterator, local2field.get(counter), zip3Map.get(counter)));

    ii->getZipCursor2->insertAtTail(new CallExpr(PRIMITIVE_MOVE, cloopZip2Cond, new CallExpr(PRIMITIVE_LESSOREQUAL, loop->loopInfo->get(1)->copy(&zip2Map), loop->loopInfo->get(3)->copy(&zip2Map))));
  }

  //
  // add BLOCK II to conditional then clause for both getHeadCursor and
  // getNextCursor methods and to the getZipCursor2 method
  //
  BlockStmt* headThen = new BlockStmt();
  BlockStmt* nextThen = new BlockStmt();
  for_alist(Expr, expr, loop->body) {
    if (expr == yield)
      break;
    headThen->insertAtTail(expr->copy(&headCopyMap));
    nextThen->insertAtTail(expr->remove());
    ii->getZipCursor2->insertAtTail(expr->copy(&zip2Map));
  }

  //
  // add BLOCK IV to conditional else clause for both getHeadCursor and
  // getNextCursor methods; set cursor to 0
  //
  BlockStmt* headElse = new BlockStmt();
  BlockStmt* nextElse = new BlockStmt();
  loop->remove();
  for_alist(Expr, expr, fn->body->body) {
    if (!expr->next) // ignore return statement
      break;
    headElse->insertAtTail(expr->copy(&headCopyMap));
    nextElse->insertAtTail(expr->remove());
  }

  //
  // add conditional to getHeadCursor and getNextCursor methods
  //
  Expr* headCond = loop->loopInfo->get(1)->copy(&headCopyMap);
  Expr* zip2Cond = loop->loopInfo->get(1)->copy(&zip2Map);
  Expr* nextCond = loop->loopInfo->get(1)->remove();
  if (loop->loopInfo->isPrimitive(PRIMITIVE_LOOP_C_FOR)) {
    headCond = new SymExpr(cloopHeadCond);
    nextCond = new SymExpr(cloopNextCond);
    zip2Cond = new SymExpr(cloopZip2Cond);
  }
  ii->getHeadCursor->insertAtTail(new CondStmt(headCond, headThen, headElse));
  ii->getNextCursor->insertAtTail(new CondStmt(nextCond, nextThen, nextElse));

  // load local variables from fields at return points and update
  // fields when local variables change
  forv_Vec(Symbol, local, locals) {
    Symbol* field = local2field.get(local);
    if (dynamic_cast<ArgSymbol*>(local)) {
      Symbol* newlocal = newTemp(ii->getNextCursor, local->type, local->name);
      updateOneSymbol(ii->getNextCursor, local, newlocal);

      Symbol* newlocal2;

      newlocal2 = newTemp(ii->getHeadCursor, local->type, local->name);
      updateOneSymbol(ii->getHeadCursor, local, newlocal2);
      headCopyMap.put(newlocal, newlocal2);
      ii->getHeadCursor->insertAtHead(new CallExpr(PRIMITIVE_MOVE, newlocal2, new CallExpr(PRIMITIVE_GET_MEMBER, headIterator, field)));

      newlocal2 = newTemp(ii->getZipCursor1, local->type, local->name);
      updateOneSymbol(ii->getZipCursor1, local, newlocal2);
      zip1Map.put(newlocal, newlocal2);
      ii->getZipCursor1->insertAtHead(new CallExpr(PRIMITIVE_MOVE, newlocal2, new CallExpr(PRIMITIVE_GET_MEMBER, zip1Iterator, field)));

      newlocal2 = newTemp(ii->getZipCursor2, local->type, local->name);
      updateOneSymbol(ii->getZipCursor2, local, newlocal2);
      zip2Map.put(newlocal, newlocal2);
      ii->getZipCursor2->insertAtHead(new CallExpr(PRIMITIVE_MOVE, newlocal2, new CallExpr(PRIMITIVE_GET_MEMBER, zip2Iterator, field)));

      newlocal2 = newTemp(ii->getZipCursor3, local->type, local->name);
      updateOneSymbol(ii->getZipCursor3, local, newlocal2);
      zip3Map.put(newlocal, newlocal2);
      ii->getZipCursor3->insertAtHead(new CallExpr(PRIMITIVE_MOVE, newlocal2, new CallExpr(PRIMITIVE_GET_MEMBER, zip3Iterator, field)));

      local = newlocal;
    } else {
      ii->getZipCursor2->insertAtHead(new CallExpr(PRIMITIVE_MOVE, dynamic_cast<Symbol*>(zip2Map.get(local)), new CallExpr(PRIMITIVE_GET_MEMBER, zip2Iterator, field)));
      ii->getZipCursor3->insertAtHead(new CallExpr(PRIMITIVE_MOVE, dynamic_cast<Symbol*>(zip3Map.get(local)), new CallExpr(PRIMITIVE_GET_MEMBER, zip3Iterator, field)));
    }
    ii->getNextCursor->insertAtHead(new CallExpr(PRIMITIVE_MOVE, local, new CallExpr(PRIMITIVE_GET_MEMBER, nextIterator, field)));
    if (isRecordType(local->type)) {
      ii->getHeadCursor->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, headIterator, field, dynamic_cast<Symbol*>(headCopyMap.get(local))));
      ii->getNextCursor->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, nextIterator, field, new SymExpr(local)));
      ii->getZipCursor1->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, zip1Iterator, field, dynamic_cast<Symbol*>(zip1Map.get(local))));
      ii->getZipCursor2->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, zip2Iterator, field, dynamic_cast<Symbol*>(zip2Map.get(local))));
      ii->getZipCursor3->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, zip3Iterator, field, dynamic_cast<Symbol*>(zip3Map.get(local))));
    } else {
      forv_Vec(SymExpr, se, local->defs) {
        if (CallExpr* parent = dynamic_cast<CallExpr*>(se->parentExpr))
          parent->getStmtExpr()->insertAfter(
            new CallExpr(PRIMITIVE_SET_MEMBER, nextIterator, field,
              new SymExpr(local)));
        SymExpr* se2;
        if ((se2 = dynamic_cast<SymExpr*>(headCopyMap.get(se))))
          if (CallExpr* parent = dynamic_cast<CallExpr*>(se2->parentExpr))
            parent->getStmtExpr()->insertAfter(
              new CallExpr(PRIMITIVE_SET_MEMBER, headIterator, field,
                new SymExpr(dynamic_cast<Symbol*>(headCopyMap.get(local)))));
        if ((se2 = dynamic_cast<SymExpr*>(zip1Map.get(se))))
          if (CallExpr* parent = dynamic_cast<CallExpr*>(se2->parentExpr))
            parent->getStmtExpr()->insertAfter(
              new CallExpr(PRIMITIVE_SET_MEMBER, zip1Iterator, field,
                new SymExpr(dynamic_cast<Symbol*>(zip1Map.get(local)))));
        if ((se2 = dynamic_cast<SymExpr*>(zip2Map.get(se))))
          if (CallExpr* parent = dynamic_cast<CallExpr*>(se2->parentExpr))
            parent->getStmtExpr()->insertAfter(
              new CallExpr(PRIMITIVE_SET_MEMBER, zip2Iterator, field,
                new SymExpr(dynamic_cast<Symbol*>(zip2Map.get(local)))));
        if ((se2 = dynamic_cast<SymExpr*>(zip3Map.get(se))))
          if (CallExpr* parent = dynamic_cast<CallExpr*>(se2->parentExpr))
            parent->getStmtExpr()->insertAfter(
              new CallExpr(PRIMITIVE_SET_MEMBER, zip3Iterator, field,
                new SymExpr(dynamic_cast<Symbol*>(zip3Map.get(local)))));
      }
    }
  }

  ii->getHeadCursor->insertAtTail(new CallExpr(PRIMITIVE_RETURN, headCond->copy()));
  ii->getNextCursor->insertAtTail(new CallExpr(PRIMITIVE_RETURN, nextCond->copy()));

  Symbol* tmp;

  tmp = newTemp(ii->getZipCursor1, ii->getZipCursor1->retType);
  ii->getZipCursor1->insertAtTail(new CallExpr(PRIMITIVE_MOVE, tmp, new_IntSymbol(0)));
  ii->getZipCursor1->insertAtTail(new CallExpr(PRIMITIVE_RETURN, tmp));

  ii->getZipCursor2->insertAtTail(new CallExpr(PRIMITIVE_RETURN, zip2Cond));

  tmp = newTemp(ii->getZipCursor3, ii->getZipCursor3->retType);
  ii->getZipCursor3->insertAtTail(new CallExpr(PRIMITIVE_MOVE, tmp, new_IntSymbol(0)));
  ii->getZipCursor3->insertAtTail(new CallExpr(PRIMITIVE_RETURN, tmp));

  tmp = newTemp(ii->isValidCursor, dtBool);
  ii->isValidCursor->insertAtTail(new CallExpr(PRIMITIVE_MOVE, tmp, ii->isValidCursor->getFormal(2)));
  ii->isValidCursor->insertAtTail(new CallExpr(PRIMITIVE_RETURN, tmp));

  buildGetValue(fn, value);

  ii->getHeadCursor->addPragma("inline");
  ii->getNextCursor->addPragma("inline");
  ii->isValidCursor->addPragma("inline");
  ii->getValue->addPragma("inline");
  ii->getZipCursor1->addPragma("inline");
  ii->getZipCursor2->addPragma("inline");
  ii->getZipCursor3->addPragma("inline");
  fn->addPragma("inline");
}


static void
addLocalVariablesLiveAtYields(Vec<Symbol*>& syms, FnSymbol* fn) {
  buildBasicBlocks(fn);

#ifdef DEBUG_LIVE
  printf("Iterator\n");
  list_view(fn);
#endif

#ifdef DEBUG_LIVE
  printf("Basic Blocks\n");
  printBasicBlocks(fn);
#endif

  Vec<Symbol*> locals;
  Map<Symbol*,int> localMap;
  Vec<SymExpr*> useSet;
  Vec<SymExpr*> defSet;
  Vec<Vec<bool>*> OUT;
  liveVariableAnalysis(fn, locals, localMap, useSet, defSet, OUT);

  int i = 0;
  forv_Vec(BasicBlock, bb, *fn->basicBlocks) {
    bool hasYield = false;
    forv_Vec(Expr, expr, bb->exprs) {
      if (CallExpr* call = dynamic_cast<CallExpr*>(expr))
        if (call->isPrimitive(PRIMITIVE_YIELD))
          hasYield = true;
    }
    if (hasYield) {
      Vec<bool> live;
      for (int j = 0; j < locals.n; j++) {
        live.add(OUT.v[i]->v[j]);
      }
      for (int k = bb->exprs.n - 1; k >= 0; k--) {
        if (CallExpr* call = dynamic_cast<CallExpr*>(bb->exprs.v[k])) {
          if (call->isPrimitive(PRIMITIVE_YIELD)) {
            for (int j = 0; j < locals.n; j++) {
              if (live.v[j]) {
                syms.add_exclusive(locals.v[j]);
              }
            }
          }
        }
        Vec<BaseAST*> asts;
        collect_asts(&asts, bb->exprs.v[k]);
        forv_Vec(BaseAST, ast, asts) {
          if (SymExpr* se = dynamic_cast<SymExpr*>(ast)) {
            if (defSet.set_in(se)) {
              live.v[localMap.get(se->var)] = false;
            }
            if (useSet.set_in(se)) {
              live.v[localMap.get(se->var)] = true;
            }
          }
        }
      }
    }
    i++;
  }

#ifdef DEBUG_LIVE
  printf("LIVE at Yield Points\n");
  forv_Vec(Symbol, sym, syms) {
    printf("%s[%d]\n", sym->name, sym->id);
  }
  printf("\n");
#endif

  forv_Vec(Vec<bool>, out, OUT)
    delete out;
}


static void
addLocalVariables(Vec<Symbol*>& syms, FnSymbol* fn) {
  buildBasicBlocks(fn);
  forv_Vec(BasicBlock, bb, *fn->basicBlocks) {
    forv_Vec(Expr, expr, bb->exprs) {
      if (DefExpr* def = dynamic_cast<DefExpr*>(expr)) {
        if (dynamic_cast<VarSymbol*>(def->sym)) {
          if (!def->sym->isReference) { // references are short-lived
                                        // and should never need to be
                                        // stored in an iterator class
                                        // (hopefully)
            syms.add(def->sym);
          }
        }
      }
    }
  }
}


void lowerIterator(FnSymbol* fn) {
  IteratorInfo* ii = fn->iteratorInfo;

  currentLineno = fn->lineno;
  currentFilename = fn->filename;
  Vec<BaseAST*> asts;
  collect_asts_postorder(&asts, fn);

  compute_sym_uses(fn);

  // make fields for all local variables and arguments
  // optimization note: only variables live at yield points are required
  Map<Symbol*,Symbol*> local2field;
  Vec<Symbol*> locals;

  for_formals(formal, fn)
    locals.add(formal);
  if (fDisableLiveVariablesIteratorClassOpt)
    addLocalVariables(locals, fn);
  else
    addLocalVariablesLiveAtYields(locals, fn);

  int i = 0;
  forv_Vec(Symbol, local, locals) {
    Symbol* field =
      new VarSymbol(astr("_", istr(i++), "_", local->name), local->type);
    local2field.put(local, field);
    ii->classType->fields->insertAtTail(new DefExpr(field));
  }

  Symbol* value = local2field.get(fn->getReturnSymbol());
  CallExpr* yield = isSingleLoopIterator(fn, asts);
  if (!fDisableSingleLoopIteratorOpt && yield) {
    buildSingleLoopMethods(fn, asts, local2field, locals, value, yield);
  } else {
    buildGetNextCursor(fn, asts, local2field, locals);
    buildGetHeadCursor(fn);
    buildIsValidCursor(fn);
    buildGetValue(fn, value);
    buildDefaultZipMethods(fn);
  }

  // rebuild iterator function

  for_alist(Expr, expr, fn->body->body)
    expr->remove();
  fn->defPoint->remove();
  fn->retType = ii->classType;
  Symbol* t1 = newTemp(fn, ii->classType);
  fn->insertAtTail(new CallExpr(PRIMITIVE_MOVE, t1, new CallExpr(PRIMITIVE_CHPL_ALLOC, ii->classType->symbol, new_StringSymbol("iterator class"))));
  forv_Vec(Symbol, local, locals) {
    Symbol* field = local2field.get(local);
    if (dynamic_cast<ArgSymbol*>(local))
      fn->insertAtTail(new CallExpr(PRIMITIVE_SET_MEMBER, t1, field, local));
  }
  fn->addPragma("first member sets");
  fn->insertAtTail(new CallExpr(PRIMITIVE_RETURN, t1));
  ii->getValue->defPoint->insertAfter(new DefExpr(fn));
}
