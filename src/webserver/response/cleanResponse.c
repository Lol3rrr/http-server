#include "../headerFiles/response.h"

int cleanResponse(response* respPtr) {
  if (respPtr->statusMessage.content != NULL) {
    free(respPtr->statusMessage.content);
  }
  if (respPtr->protokol.content != NULL) {
    free(respPtr->protokol.content);
  }

  if (respPtr->dataSize > 0)
    free(respPtr->data);

  cleanHeader(&(respPtr->headers));

  return 0;
}
