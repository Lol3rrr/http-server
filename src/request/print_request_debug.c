#include "../request.h"

void print_request_debug(request* req) {
  if (isDebug() == 0) {
    return;
  }

  printf("[Debug][Request] Printing Request: \n");
  printf("[Debug][Request] Method: '%s' \n", req->method);
  printf("[Debug][Request] Path: '%s' \n", req->path);
  printf("[Debug][Request] Protokol: '%s' \n", req->protokol);
  printf("[Debug][Request] Headers: \n");
  print_header_debug(req->headers);
}
