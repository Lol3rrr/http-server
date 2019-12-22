#include "../headerFiles/response.h"

int createHTTPResponse(response* respPtr, char** result) {
  char* head;
  int headSize = createHTTPHead(respPtr, &head);

  int contentLength = respPtr->dataSize;

  int totalLength = headSize + contentLength;

  char* resp = createEmptyCString(totalLength);
  strncpy(resp, head, headSize);
  strncpy(resp + headSize, respPtr->data, contentLength);

  free(head);

  *result = resp;

  return totalLength;
}
