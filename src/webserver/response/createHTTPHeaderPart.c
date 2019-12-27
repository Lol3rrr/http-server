#include "../headerFiles/response.h"

int createHTTPHeaderPart(response* respPtr, char* spacer, int spacerLength, char** result) {
  int headerLength = -1;
  char* headerPart;

  if (respPtr->headers != NULL) {
    headers_t* headers = respPtr->headers;
    kvNode_t* currentKV = headers->kvNodes;
    headerPartNode_t* head = NULL;

    headerLength = 0;

    while (currentKV != NULL) {
      string* result = createKVPair(currentKV);
      headerLength += result->length;
      headerLength += spacerLength;


      if (head == NULL) {
        head = (headerPartNode_t*) malloc(1 * sizeof(headerPartNode_t));
        head->content = result->content;
        head->length = result->length;
        head->next = NULL;
      }else {
        pushHeaderNodePart(head, result->content, result->length);
      }

      free(result);

      currentKV = currentKV->next;
    }

    headerPart = createEmptyCString(headerLength);
    int offset = 0;

    headerPartNode_t* current = head;
    while (current != NULL) {
      memcpy(headerPart + offset, current->content, current->length);
      offset += current->length;

      memcpy(headerPart + offset, spacer, spacerLength);
      offset += spacerLength;

      current = current->next;
    }

    cleanHeaderNodePart(head);

    *result = headerPart;
  }

  return headerLength;
}
