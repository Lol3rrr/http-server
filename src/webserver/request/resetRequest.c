#include "../headerFiles/request.h"

int resetRequest(request* reqPtr) {
  cleanString(reqPtr->method);
  reqPtr->method.content = NULL;
  reqPtr->method.length = -1;
  reqPtr->method.needsFree = 0;
  cleanString(reqPtr->path);
  reqPtr->path.content = NULL;
  reqPtr->path.length = -1;
  reqPtr->path.needsFree = 0;
  cleanString(reqPtr->protokol);
  reqPtr->protokol.content = NULL;
  reqPtr->protokol.length = -1;
  reqPtr->protokol.needsFree = 0;
  cleanString(reqPtr->body);
  reqPtr->body.content = NULL;
  reqPtr->body.length = -1;
  reqPtr->body.needsFree = 0;

  resetHeader(&(reqPtr->headers));
  resetQueryParams(&(reqPtr->params));

  if (reqPtr->initialContent)
    free(reqPtr->initialContent);
  reqPtr->initialContent = NULL;
}