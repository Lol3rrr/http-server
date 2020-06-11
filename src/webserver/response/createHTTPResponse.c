#include "../headerFiles/response.h"

int createHTTPResponse(response* respPtr, string* headResult) {
  char* head;
  int headSize = createHTTPHead(respPtr, &head);
  (*headResult).content = head;
  (*headResult).length = headSize;
  (*headResult).needsFree = 1;

  return 0;
}
