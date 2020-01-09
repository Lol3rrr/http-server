#include "../server.h"

void cleanUp(request* req, response* respPtr) {
  cleanRequest(req);
  cleanResponse(respPtr);
}

int handleRequest(int conFd, request* reqPtr) {
  logDebug("[handleRequest] Handling Request... \n");
#ifdef PROMETHEUS
  incCounterByName("total_requests", &counterRegistry);
#endif

  response* respPtr = createEmptyResponse(reqPtr->protokol.content);

  int worked;
  if (customPathEnabled) {
    worked = callCustomPath(&(reqPtr->method), &(reqPtr->path), reqPtr, respPtr);
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
