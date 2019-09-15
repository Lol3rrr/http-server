#include "../headerFiles/request.h"

int receiveRequest(int conFd, request** reqPtr) {
  int bufferSize = 4096;
  char* readBuffer = (char*) malloc(bufferSize * sizeof(char));

  int readBytes = readHTTP(conFd, &readBuffer, bufferSize);
  if (readBytes < 0) {
    free(readBuffer);

    return 1;
  }

  logDebug("[receiveRequest] Read %d Bytes \n", readBytes);

  headerLine_t* head = splitHTTPRequest(&readBuffer, readBytes);

  char* body;
  int bodySize = parseBody(readBuffer, readBytes, &body);

  request* req;
  int worked = parseRequest(head, &req);

  cleanHeaderLines(head);
  free(readBuffer);

  if (worked != 0) {
    logDebug("[receiveRequest] Error parsing Request \n");

    return 1;
  }


  if (bodySize > 0) {
    req->body = body;
    req->bodyLength = bodySize;
  }

  *reqPtr = req;

  return 0;
}
