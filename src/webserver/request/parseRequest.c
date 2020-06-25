#include "../headerFiles/request.h"

// Returns 0 if worked
int parseRequest(request* req, int headerLength) {
  int headerEnd = parseHead(req->initialContent, headerLength, req);
  if (headerEnd == -2) {
    return 2;
  }

  if (headerEnd != -1 && headerEnd < headerLength) {
    int bodySize = headerLength - headerEnd;

    req->body.content = req->initialContent + headerEnd;
    req->body.length = bodySize;
    req->body.needsFree = 0;
  }

  parseQueryParams(req->path, &(req->path), &(req->params));

  return 0;
}
