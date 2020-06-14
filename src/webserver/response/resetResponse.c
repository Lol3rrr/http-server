#include "../headerFiles/response.h"

int resetResponse(response* respPtr) {
  respPtr->statusCode = -1;
  cleanString(respPtr->statusMessage);
  respPtr->statusMessage.content = NULL;
  respPtr->statusMessage.length = -1;
  respPtr->statusMessage.needsFree = 0;

  cleanString(respPtr->protokol);
  respPtr->protokol.content = NULL;
  respPtr->protokol.length = -1;
  respPtr->protokol.needsFree = 0;

  if (respPtr->dataSize > 0) {
    if (respPtr->data)
      free(respPtr->data);
    if (respPtr->closeFile)
      fclose(respPtr->streamingFd);
  }
  respPtr->data = NULL;
  respPtr->dataSize = -1;
  respPtr->streamingFd = NULL;
  respPtr->closeFile = 0;

  resetKVList(&(respPtr->headerList));

  string serverKey = {
    .content = "Server",
    .length = 6,
    .needsFree = 0
  };
  string serverValue = {
    .content = "Lol3r-C/2.1",
    .length = 11,
    .needsFree = 0
  };
  addHeader(respPtr, serverKey, serverValue);

  return 0;
}