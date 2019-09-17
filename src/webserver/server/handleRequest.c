#include "../server.h"

void cleanUp(request* req, response* respPtr) {
  cleanRequest(req);
  cleanResponse(respPtr);
}

int handleRequest(int conFd, request* reqPtr) {
  logDebug("[handleRequest] Handling Request... \n");

  response* respPtr = createEmptyResponse(reqPtr->protokol);

  int worked;
  if (customPathEnabled) {
    worked = callCustomPath(reqPtr->method, reqPtr->path, reqPtr, respPtr);
  } else {
    worked = handleGETrequest(reqPtr, respPtr);
  }

  if (worked != 0) {
    sendNotFound(conFd, reqPtr);
    cleanUp(reqPtr, respPtr);

    logDebug("[handleRequest] Sent not found");

    return -1;
  }

  sendResponse(conFd, respPtr);
  cleanUp(reqPtr, respPtr);

  logDebug("[handleRequest] Sent Response \n");

  return 0;
}
