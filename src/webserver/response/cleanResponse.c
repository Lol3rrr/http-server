#include "../headerFiles/response.h"

int cleanResponse(response* respPtr) {
  free(respPtr->protokol);
  if (respPtr->dataSize > -1)
    free(respPtr->data);

  cleanHeader(respPtr->headers);

  free(respPtr);

  return 0;
}
