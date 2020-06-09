#include "../server.h"

int handleConnection(int conFd, request* req, response* resp) {
  // Receiving and parsing the Request
  int worked = receiveRequest(conFd, req);
  if (worked != 0) {
    logError("Receiving Request: %d \n", worked);

    return 1;
  }

  print_request_debug(req);

  int handled = handleRequest(conFd, req, resp);

  logDebug("[handleConnection] Request has been handled \n");

  return 0;
}
