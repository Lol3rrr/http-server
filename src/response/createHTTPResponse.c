#include "../response.h"

int createHTTPResponse(response* respPtr, char** result) {
  char* head;
  int headSize = createHTTPHead(respPtr, &head);

  int contentLength = respPtr->dataSize;

  int totalLength = headSize + contentLength;

  char* resp = createEmptyCString(totalLength);

  int respOffset = 0;
  for(int i = 0; i < headSize; i++) {
    resp[respOffset] = head[i];
    respOffset++;
  }
  for(int i = 0; i < contentLength; i++) {
    resp[respOffset] = respPtr->data[i];
    respOffset++;
  }

  free(head);

  *result = resp;

  return totalLength;
}
