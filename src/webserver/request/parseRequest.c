#include "../headerFiles/request.h"

// Returns 0 if worked
int parseRequest(char* headerPart, int headerLength, request** result) {
  clock_t startTime = clock();

  request* req = (request*) malloc(1 * sizeof(request));
  req->method = NULL;
  req->path = NULL;
  req->protokol = NULL;
  req->headers = NULL;
  req->body = NULL;
  req->bodyLength = -1;
  req->params = NULL;

  headers_t* head = parseHeaders(headerPart, headerLength, &(req->method), &(req->path), &(req->protokol));
  req->headers = head;

  if (hasEmptyField(req)) {
    logDebug("[parseRequest] Not everything has been set \n");
    logDebug("[parseRequest] Method: '%p', Path: '%p', Protokol: '%p', First Header Key: '%p' \n", req->method, req->path, req->protokol, req->headers->kvNodes);

    cleanRequest(req);

    return 1;
  }

  if (findStr(req->path, "..", -1) != -1) {
    logDebug("[parseRequest] Found a '..' in the path \n");

    return 2;
  }

  *result = req;

  if (isMeasuringEnabled()) {
    double time_spent = (double) (clock() - startTime) / CLOCKS_PER_SEC;
    logMeasuring("[parseRequest] Took %f Seconds \n", time_spent);
  }

  return 0;
}
