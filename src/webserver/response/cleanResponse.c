#include "../headerFiles/response.h"

int cleanResponse(response* respPtr) {
  if (respPtr->statusMessage.content != NULL) {
    free(respPtr->statusMessage.content);
  }

  cleanString(respPtr->protokol);

  if (respPtr->streamSize > 0) {
    closeFile(&(respPtr->file));
  }

  if (respPtr->dataSize > 0)
    free(respPtr->data);

  cleanUpTree(respPtr->bTreeHeaders);

  return 0;
}
