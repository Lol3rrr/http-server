#include "../response.h"

int cleanResponse(response* respPtr) {
  free(respPtr->protokol);
  free(respPtr->data);

  cleanHeader(respPtr->headers);

  free(respPtr);

  return 0;
}
