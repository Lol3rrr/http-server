#include "../headerFiles/response.h"

int createHTTPHeaderPart(response* respPtr, char* spacer, char** result) {
  clock_t startTime = clock();

  int spacerLength = getStringLength(spacer);

  int headerLength = -1;
  char* headerPart;

  if (respPtr->headers != NULL) {
    headerNode_t* currentHeader = respPtr->headers;
    headerPartNode_t* head = NULL;

    headerLength = 0;

    while (currentHeader != NULL) {
      char* result;

      int resultLength = createHeaderPair(currentHeader, &result);
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

      currentHeader = currentHeader->next;
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

  clock_t endTime = clock();
  if (isMeasuringEnabled()) {
    double time_spent = (double) (endTime - startTime) / CLOCKS_PER_SEC;
    printf("[Measuring][createHTTPHeaderPart] Took %f Seconds \n", time_spent);
  }

  return headerLength;
}
