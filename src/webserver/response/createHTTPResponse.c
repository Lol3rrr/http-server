#include "../headerFiles/response.h"

int createHTTPResponse(response* respPtr, string** headResult, string** bodyResult) {
  char* head;
  int headSize = createHTTPHead(respPtr, &head);
  *headResult = createString(head, headSize);

  *bodyResult = NULL;
  if (respPtr->dataSize > 0) {
    *bodyResult = createString(respPtr->data, respPtr->dataSize);
  }

  return 0;
}
