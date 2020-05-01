#include "../headerFiles/request.h"

int cleanRequest(request* reqPtr) {
  if (reqPtr->path.length > -1) {
    free(reqPtr->path.content);
  }
  if (reqPtr->protokol.length > -1) {
    free(reqPtr->protokol.content);
  }

  cleanHeader(&(reqPtr->headers));
  if (reqPtr->params != NULL)
    cleanQueryParams(reqPtr->params);

  free(reqPtr->body);

  return 0;
}
