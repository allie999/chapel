#ifndef CHPL_RUNTIME_ETC_MLI_MLI_COMMON_C_
#define CHPL_RUNTIME_ETC_MLI_MLI_COMMON_C_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdarg.h>
#include <assert.h>
#include <zmq.h>

// Error codes must all be less than zero unless we change the protocol!
enum chpl_mli_errors {

  CHPL_MLI_ERROR_NONE       = +0,
  CHPL_MLI_ERROR_SHUTDOWN   = -1,
  CHPL_MLI_ERROR_UNKNOWN    = -2,
  CHPL_MLI_ERROR_NOFUNC     = -3,
  CHPL_MLI_ERROR_SOCKET     = -4,
  CHPL_MLI_ERROR_EXCEPT     = -5

};

//
// Both the client and server will be using this to perform RPC.
//
struct chpl_mli_context {

  void* context;
  void* main;
  void* arg;
  void* res;

};

static
char* chpl_mli_concat(size_t count, ...) {
  char* result = NULL;
  char* bufptr = NULL;
  va_list argp;
  size_t i = 0;
  size_t length = 0;

  va_start(argp, count);

  for (i = 0; i < count; i++) {
    const char* chunk = va_arg(argp, const char*);
    length += strlen(chunk);
  }

  result = malloc(length + 1);
  if (result == NULL) { return NULL; }

  va_start(argp, count);
  bufptr = result;

  for (i = 0; i < count; i++) {
    const char* chunk = va_arg(argp, const char*);
    strcpy(bufptr, chunk);
    bufptr += strlen(chunk);
  }

  result[length] = 0;
  va_end(argp);

  return result;  
}

//
// In this interface only the server should bind!
//
static
void chpl_mli_bind(void* socket, const char* ip, const char* port) {
  const char* real_ip = ip;
  char* buffer = NULL;
  char* bufptr = NULL;
  size_t len = 0;
  int err = 0;

  //
  // The ZMQ API is non-orthagonal in this way, so in our interface we opt to
  // substitute "localhost" for "*" (indicating any device) automatically.
  // Note that IP addresses are not otherwise sanitized (ZMQ will do that for
  // us, but we don't return errors yet).
  //
  if (!strcmp(ip, "localhost")) {
    real_ip = "*";
  }

  buffer = chpl_mli_concat(4, "tcp://", real_ip, ":", port);

  // TODO: Handle malloc error here?
  if (buffer == NULL) {
    ;;;
  }

  // TODO: Can this error out at all?
  err = zmq_bind(socket, buffer);
  assert(err == 0);

  free(buffer);

  return;
}

static
void chpl_mli_connect(void* socket, const char* ip, const char* port) {
  char* buffer = NULL;
  char* bufptr = NULL;
  size_t len = 0;
  int err = 0;

  buffer = chpl_mli_concat(4, "tcp://", ip, ":", port);
 
  // TODO: Can this error out at all?
  err = zmq_connect(socket, buffer);
  assert(err == 0);

  free(buffer);

  return;  
}

static
void chpl_mli_close(void* socket) {
  // TODO: Should set LINGER to zero if we don't want to block.
  zmq_close(socket);
}

static
int chpl_mli_push(void* socket, void* buffer, size_t bytes, int flags) {
  return zmq_send(socket, buffer, bytes, flags);  
}

static
int chpl_mli_pull(void* socket, void* buffer, size_t bytes, int flags) {
  return zmq_recv(socket, buffer, bytes, flags);
}





#endif
