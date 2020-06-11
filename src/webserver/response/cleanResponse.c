#include "../headerFiles/response.h"

int cleanResponse(response* respPtr) {
  if (respPtr->statusMessage.content != NULL) {
    free(respPtr->statusMessage.content);
  }

  cleanString(respPtr->protokol);

  if (respPtr->dataSize > 0)
    free(respPtr->data);

  cleanKVList(respPtr->headerList);

  return 0;
}
