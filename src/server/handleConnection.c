#include "../server.h"

int handleConnection(int conFd) {
  clock_t startTime = clock();

  // Receiving and parsing the Request
  request* req;
  int worked = receiveRequest(conFd, &req);
  if (worked != 0) {
    printf("[Error] Receiving Request: %d \n", worked);

    return 1;
  }

  print_request_debug(req);

  int handled = 0;
  if (strcmp(req->method, "GET") == 0) {
    handled = handleGETrequest(conFd, req);
  }else {
    sendNotFound(conFd, req);

    free(req);
  }

  clock_t endTime = clock();
  if (isMeasuringEnabled()) {
    double time_spent = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    printf("[Measuring][handleConnection] Took %f Seconds \n", time_spent);
  }

  return handled;
}
