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

  request* req;
  int worked = parseRequest(readBuffer, readBytes, &req);
  if (worked != 0) {
    logDebug("[receiveRequest] Error parsing Request \n");

    return 1;
  }

  free(readBuffer);

  char* nPath;
  queryParams_t* params = parseQueryParams(req->path, &nPath);
  if (params != NULL) {
    free(req->path->content);
    req->path->content = nPath;
    req->path->length = strlen(nPath);
    req->params = params;
  }

  *reqPtr = req;

  return 0;
}
