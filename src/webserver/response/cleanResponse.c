#include "../headerFiles/response.h"

int cleanResponse(response* respPtr) {
  if (respPtr->statusMessage.content != NULL) {
    free(respPtr->statusMessage.content);
  }

  cleanString(respPtr->protokol);

  if (respPtr->dataSize > 0) {
    if (respPtr->data)
      free(respPtr->data);
    if (respPtr->closeFile)
      fclose(respPtr->streamingFd);
  }

  cleanKVList(respPtr->headerList);

  return 0;
}
