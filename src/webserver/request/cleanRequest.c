#include "../headerFiles/request.h"

int cleanRequest(request* reqPtr) {
  free(reqPtr->method);
  free(reqPtr->path);
  free(reqPtr->protokol);

  cleanHeader(reqPtr->headers);

  free(reqPtr->body);

  free(reqPtr);
}
