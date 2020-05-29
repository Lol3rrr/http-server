#include "../headerFiles/request.h"

int cleanRequest(request* reqPtr) {
  cleanString(reqPtr->method);
  cleanString(reqPtr->path);
  cleanString(reqPtr->protokol);
  cleanString(reqPtr->body);

  cleanHeader(&(reqPtr->headers));
  if (reqPtr->params != NULL)
    cleanQueryParams(reqPtr->params);


  if (reqPtr->initialContent)
    free(reqPtr->initialContent);

  return 0;
}
