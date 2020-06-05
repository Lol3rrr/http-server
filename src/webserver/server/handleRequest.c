#include "../server.h"

void cleanUp(request* req, response* respPtr) {
  cleanRequest(req);
  free(req);
  cleanResponse(respPtr);
  free(respPtr);
}

int handleRequest(int conFd, request* reqPtr) {
  logDebug("[handleRequest] Handling Request... \n");
#ifdef PROMETHEUS
  string counter = {
    .content = "total_requests",
    .length = 14
  };
  incCounterByName(counter, &counterRegistry);
#endif

  response* respPtr = createEmptyResponse(reqPtr->protokol);

  int worked;
  if (customPathEnabled) {
    worked = callCustomPath(reqPtr->method, reqPtr->path, reqPtr, respPtr);
  } else {
    worked = handleGETrequest(reqPtr, respPtr);
  }

  if (worked < 0) {
    sendInternalError(conFd, reqPtr);
    cleanUp(reqPtr, respPtr);
    return -1;
  }else if (worked > 0) {
    sendNotFound(conFd, reqPtr);
    cleanUp(reqPtr, respPtr);
    return -1;
  }

  sendResponse(conFd, respPtr);
  cleanUp(reqPtr, respPtr);

  logDebug("[handleRequest] Sent Response \n");

  return 0;
}
