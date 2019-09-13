#include "../server.h"

int handleConnection(int conFd) {
  clock_t startTime = clock();

  // Receiving and parsing the Request
  request* req;
  int worked = receiveRequest(conFd, &req);
  if (worked != 0) {
    logError("Receiving Request: %d \n", worked);

    return 1;
  }

  print_request_debug(req);

  int handled = handleRequest(conFd, req);

  clock_t endTime = clock();
  if (isMeasuringEnabled()) {
    double time_spent = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    logMeasuring("[handleConnection] Took %f Seconds \n", time_spent);
  }

  return 0;
}
