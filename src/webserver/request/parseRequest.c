#include "../headerFiles/request.h"

// Returns 0 if worked
int parseRequest(char* headerPart, int headerLength, request* req) {
  req->initialContent = headerPart;

  int headerEnd = parseHead(headerPart, headerLength, req);
  if (headerEnd == -2) {
    return 2;
  }

  if (headerEnd != -1 && headerEnd < headerLength) {
    int bodySize = headerLength - headerEnd;

    req->body.content = headerPart + headerEnd;
    req->body.length = bodySize;
    req->body.needsFree = 0;
  }

  parseQueryParams(req->path, &(req->path), &(req->params));

  return 0;
}
