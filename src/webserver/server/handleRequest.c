#include "../server.h"

void cleanUp(request* req, response* respPtr) {
  cleanRequest(req);
  cleanResponse(respPtr);
}

int handleRequest(int conFd, request* reqPtr) {
  response* respPtr = createEmptyResponse(reqPtr->protokol);

  int worked = -1;
  if (customPathEnabled) {
    worked = callCustomPath(reqPtr->method, reqPtr->path, reqPtr, respPtr);
  } else {
    worked = handleGETrequest(reqPtr, respPtr);
  }

  if (worked != 0) {
    sendNotFound(conFd, reqPtr);

    cleanUp(reqPtr, respPtr);

    return -1;
  }

  sendResponse(conFd, respPtr);

  cleanUp(reqPtr, respPtr);

  return 0;
}
