#include "../headerFiles/response.h"

int cleanResponse(response* respPtr) {
  cleanString(respPtr->statusMessage);

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
