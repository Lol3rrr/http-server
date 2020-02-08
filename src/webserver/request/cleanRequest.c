#include "../headerFiles/request.h"

int cleanRequest(request* reqPtr) {
  if (reqPtr->method.content != NULL) {
    free(reqPtr->method.content);
  }
  if (reqPtr->path.content != NULL) {
    free(reqPtr->path.content);
  }
  if (reqPtr->protokol.content != NULL) {
    free(reqPtr->protokol.content);
  }

  cleanHeader(&(reqPtr->headers));
  if (reqPtr->params != NULL)
    cleanQueryParams(reqPtr->params);

  free(reqPtr->body);
}
