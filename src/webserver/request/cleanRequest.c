#include "../headerFiles/request.h"

int cleanRequest(request* reqPtr) {
  if (reqPtr->method != NULL) {
    free(reqPtr->method->content);
    free(reqPtr->method);
  }
  if (reqPtr->path != NULL) {
    free(reqPtr->path->content);
    free(reqPtr->path);
  }
  if (reqPtr->protokol != NULL) {
    free(reqPtr->protokol->content);
    free(reqPtr->protokol);
  }

  cleanHeader(reqPtr->headers);
  if (reqPtr->params != NULL)
    cleanQueryParams(reqPtr->params);

  free(reqPtr->body);

  free(reqPtr);
}
