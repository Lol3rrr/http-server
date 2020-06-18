#include "../headerFiles/request.h"

int receiveRequest(c_socket conFd, request* reqPtr) {
  char* readBuffer;
  int readBytes = readHTTP(conFd, &readBuffer);
  if (readBytes < 0) {
    return 1;
  }

  logDebug("[receiveRequest] Read %d Bytes \n", readBytes);

  int worked = parseRequest(readBuffer, readBytes, reqPtr);
  if (worked != 0) {
    logError("[receiveRequest] Error parsing Request \n");

    return 1;
  }

  return 0;
}
