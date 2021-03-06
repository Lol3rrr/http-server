#include "../headerFiles/request.h"

void print_request_debug(request* req) {
  if (isDebugEnabled() == 0) {
    return;
  }

  logDebug("[Request] Printing Request: \n");
  logDebug("[Request] Method: '%.*s' \n", req->method.length, req->method.content);
  logDebug("[Request] Path: '%.*s' \n", req->path.length, req->path.content);
  logDebug("[Request] Protokol: '%.*s' \n", req->protokol.length, req->protokol.content);
  logDebug("[Request] Headers: \n");
  print_header_debug(&(req->headers));
  logDebug("[Request] Body: '%.*s' \n", req->body.length, req->body.content);
  logDebug("[Request] Body-Length: %d \n", req->body.length);
}
