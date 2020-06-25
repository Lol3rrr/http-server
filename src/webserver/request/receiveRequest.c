#include "../headerFiles/request.h"

int receiveRequest(int conFd, request* reqPtr) {
  int readBytes = readHTTP(conFd, &(reqPtr->initialContent), reqPtr->initalBufferSize, &(reqPtr->initalBufferSize));
  if (readBytes < 0) {
    return 1;
  }

  logDebug("[receiveRequest] Read %d Bytes \n", readBytes);

  int worked = parseRequest(reqPtr, readBytes);
  if (worked != 0) {
    logError("[receiveRequest] Error parsing Request \n");

    return 1;
  }

  return 0;
}
