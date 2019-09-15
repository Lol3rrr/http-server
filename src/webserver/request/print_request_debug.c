#include "../headerFiles/request.h"

void print_request_debug(request* req) {
  if (isDebugEnabled() == 0) {
    return;
  }

  logDebug("[Request] Printing Request: \n");
  logDebug("[Request] Method: '%s' \n", req->method);
  logDebug("[Request] Path: '%s' \n", req->path);
  logDebug("[Request] Protokol: '%s' \n", req->protokol);
  logDebug("[Request] Headers: \n");
  print_header_debug(req->headers);
  logDebug("[Request] Body: '%s' \n", req->body);
  logDebug("[Request] Body-Length: %d \n", req->bodyLength);
}
