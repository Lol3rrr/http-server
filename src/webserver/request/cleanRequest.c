#include "../headerFiles/request.h"

int cleanRequest(request* reqPtr) {
  free(reqPtr->method->content);
  free(reqPtr->method);
  free(reqPtr->path->content);
  free(reqPtr->path);
  free(reqPtr->protokol->content);
  free(reqPtr->protokol);

  cleanHeader(reqPtr->headers);
  if (reqPtr->params != NULL)
    cleanQueryParams(reqPtr->params);

  free(reqPtr->body);

  free(reqPtr);
}
