#include "../headerFiles/response.h"

int createHTTPResponse(response* respPtr, string* headResult, string* bodyResult) {
  char* head;
  int headSize = createHTTPHead(respPtr, &head);
  (*headResult).content = head;
  (*headResult).length = headSize;
  (*headResult).needsFree = 1;

  (*bodyResult).content = NULL;
  (*bodyResult).length = -1;
  (*bodyResult).needsFree = 0;
  if (respPtr->dataSize > 0) {
    (*bodyResult).content = respPtr->data;
    (*bodyResult).length = respPtr->dataSize;
  }

  return 0;
}
