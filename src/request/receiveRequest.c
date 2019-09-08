#include "../request.h"

int receiveRequest(int conFd, request** reqPtr) {
  int bufferSize = 4096;
  char* readBuffer = (char*) malloc(bufferSize * sizeof(char));

  int readBytes = readHTTP(conFd, &readBuffer, bufferSize);
  if (readBytes < 0) {
    free(readBuffer);

    return 1;
  }

  if (isDebugEnabled()) {
    printf("[Debug][receiveRequest] Read %d Bytes \n", readBytes);
  }

  headerLine_t* head = splitHTTPRequest(&readBuffer, readBytes);

  free(readBuffer);

  request* req;
  int worked = parseRequest(head, &req);
  if (worked != 0) {
    if (isDebugEnabled()) {
      printf("[Debug][receiveRequest] Error parsing Request \n");
    }

    cleanHeaderLines(head);

    return 1;
  }

  cleanHeaderLines(head);

  *reqPtr = req;

  return 0;
}
