#include "../headerFiles/response.h"

int createHTTPHeaderPart(response* respPtr, char* spacer, char** result) {
  int spacerLength = getStringLength(spacer);

  int headerLength = -1;
  char* headerPart;

  if (respPtr->headers != NULL) {
    headers_t* headers = respPtr->headers;
    kvNode_t* currentKV = headers->kvNodes;
    headerPartNode_t* head = NULL;

    headerLength = 0;

    while (currentKV != NULL) {
      char* result;

      int resultLength = createKVPair(currentKV, &result);
      headerLength += resultLength;
      headerLength += spacerLength;


      if (head == NULL) {
        head = (headerPartNode_t*) malloc(1 * sizeof(headerPartNode_t));
        head->content = result;
        head->length = resultLength;
        head->next = NULL;
      }else {
        pushHeaderNodePart(head, result, resultLength);
      }

      currentKV = currentKV->next;
    }

    headerPart = createEmptyCString(headerLength);

    int offset = 0;

    headerPartNode_t* current = head;
    while (current != NULL) {
      for (int i = 0; i < current->length; i++) {
        headerPart[offset] = current->content[i];

        offset++;
      }

      for (int i = 0; i < spacerLength; i++) {
        headerPart[offset] = spacer[i];
        offset++;
      }

      current = current->next;
    }

    cleanHeaderNodePart(head);

    *result = headerPart;
  }

  return headerLength;
}
