#include "../headerFiles/request.h"

int receiveRequest(int conFd, request** reqPtr) {
  char* readBuffer;
  int readBytes = readHTTP(conFd, &readBuffer);
  if (readBytes < 0) {
    free(readBuffer);

    return 1;
  }

  logDebug("[receiveRequest] Read %d Bytes \n", readBytes);

  request* req;
  int worked = parseRequest(readBuffer, readBytes, &req);
  if (worked != 0) {
    logError("[receiveRequest] Error parsing Request \n");

    return 1;
  }

  *reqPtr = req;

  return 0;
}
