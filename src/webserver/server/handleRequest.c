#include "../server.h"

int handleRequest(int conFd, request* reqPtr, response* respPtr) {
  logDebug("[handleRequest] Handling Request... \n");
#ifdef PROMETHEUS
  string counter = {
    .content = "total_requests",
    .length = 14
  };
  incCounterByName(counter, &counterRegistry);
#endif

  setResponse(respPtr, reqPtr->protokol);

  int worked;
  if (customPathEnabled) {
    worked = callCustomPath(reqPtr->method, reqPtr->path, reqPtr, respPtr);
  } else {
    worked = handleGETrequest(reqPtr, respPtr);
  }

  if (worked < 0) {
    sendInternalError(conFd, reqPtr);
    return -1;
  }else if (worked > 0) {
    sendNotFound(conFd, reqPtr);
    return -1;
  }

  sendResponse(conFd, respPtr);

  logDebug("[handleRequest] Sent Response \n");

  return 0;
}
