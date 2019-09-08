#include "../headerFiles/request.h"

int cleanRequest(request* reqPtr) {
  if (reqPtr->method != NULL) {
    free(reqPtr->method);
  }
  if (reqPtr->path != NULL) {
    free(reqPtr->path);
  }
  if (reqPtr->protokol != NULL) {
    free(reqPtr->protokol);
  }

  cleanHeader(reqPtr->headers);

  free(reqPtr);
}
