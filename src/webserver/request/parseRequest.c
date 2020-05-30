#include "../headerFiles/request.h"

// Returns 0 if worked
int parseRequest(char* headerPart, int headerLength, request** result) {
  request* req = (request*) malloc(1 * sizeof(request));
  req->initialContent = headerPart;
  req->path.content = NULL;
  req->path.content = NULL;
  req->path.length = -1;
  req->protokol.content = NULL;
  req->protokol.length = -1;
  req->headers = createEmptyHeaders();
  req->body.content = NULL;
  req->body.needsFree = 0;
  req->params = NULL;

  int headerEnd = parseHead(headerPart, headerLength, req);
  if (headerEnd == -2) {
    cleanRequest(req);
    free(req);

    return 2;
  }

  if (headerEnd != -1 && headerEnd < headerLength) {
    int bodySize = headerLength - headerEnd;

    req->body.content = headerPart + headerEnd;
    req->body.length = bodySize;
    req->body.needsFree = 0;
  }

  if (hasEmptyField(req)) {
    logDebug("[parseRequest] Not everything has been set \n");
    logDebug("[parseRequest] Path: '%p', Protokol: '%p', First Header Key: '%p' \n", req->path.content, req->protokol.content, req->headers.kvNodes);

    cleanRequest(req);
    free(req);

    return 1;
  }

  char* nPath;
  int nPathLength;
  queryParams_t* params = parseQueryParams(req->path, &nPath, &nPathLength);
  if (params != NULL) {
    req->path.content = nPath;
    req->path.length = nPathLength;
    req->path.needsFree = 0;
    req->params = params;
  }

  *result = req;

  return 0;
}
