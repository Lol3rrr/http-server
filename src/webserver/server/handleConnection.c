#include "../server.h"

int handleConnection(int conFd, request* req) {
  clock_t startTime = clock();

  // Receiving and parsing the Request
  int worked = receiveRequest(conFd, req);
  if (worked != 0) {
    logError("Receiving Request: %d \n", worked);

    return 1;
  }

  print_request_debug(req);

  int handled = handleRequest(conFd, req);

  logDebug("[handleConnection] Request has been handled \n");

  if (isMeasuringEnabled()) {
    double time_spent = (double)(clock() - startTime) / CLOCKS_PER_SEC;

    logMeasuring("[handleConnection] Took %f Seconds \n", time_spent);
  }

  return 0;
}
