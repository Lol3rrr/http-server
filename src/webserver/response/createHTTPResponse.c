#include "../headerFiles/response.h"

int createHTTPResponse(response* respPtr, string** headResult, string** bodyResult) {
  char* head;
  int headSize = createHTTPHead(respPtr, &head);
  *headResult = (string*) malloc(1 * sizeof(string));
  (*headResult)->content = head;
  (*headResult)->length = headSize;

  *bodyResult = NULL;
  if (respPtr->dataSize > 0) {
    *bodyResult = (string*) malloc(1 * sizeof(string));
    (*bodyResult)->content = respPtr->data;
    (*bodyResult)->length = respPtr->dataSize;
  }

  return 0;
}
