#include "../headerFiles/request.h"

// Returns 0 if worked
int parseRequest(char* headerPart, int headerLength, request** result) {
  request* req = (request*) malloc(1 * sizeof(request));
  req->method.content = NULL;
  req->path.content = NULL;
  req->protokol.content = NULL;
  req->headers = NULL;
  req->body = NULL;
  req->bodyLength = -1;
  req->params = NULL;

  int headerEnd = parseHead(headerPart, headerLength, req);
  if (headerEnd == -2) {
    cleanRequest(req);

    return 2;
  }

  if (headerEnd != -1 && headerEnd < headerLength) {
    int bodySize = headerLength - headerEnd;
    char* body = createEmptyCString(bodySize);
    memcpy(body, headerPart + headerEnd, bodySize);

    req->body = body;
    req->bodyLength = bodySize;
  }

  if (hasEmptyField(req)) {
    logDebug("[parseRequest] Not everything has been set \n");
    logDebug("[parseRequest] Method: '%p', Path: '%p', Protokol: '%p', First Header Key: '%p' \n", req->method.content, req->path.content, req->protokol.content, req->headers->kvNodes);

    cleanRequest(req);

    return 1;
  }

  char* nPath;
  int nPathLength;
  queryParams_t* params = parseQueryParams(&(req->path), &nPath, &nPathLength);
  if (params != NULL) {
    free(req->path.content);
    req->path.content = nPath;
    req->path.length = nPathLength;
    req->params = params;
  }

  *result = req;

  return 0;
}
