#include "../headerFiles/response.h"

int cleanResponse(response* respPtr) {
  if (respPtr->statusMessage != NULL) {
    free(respPtr->statusMessage->content);
    free(respPtr->statusMessage);
  }
  if (respPtr->protokol != NULL) {
    free(respPtr->protokol->content);
    free(respPtr->protokol);
  }

  if (respPtr->dataSize > 0)
    free(respPtr->data);

  cleanHeader(respPtr->headers);

  free(respPtr);

  return 0;
}
