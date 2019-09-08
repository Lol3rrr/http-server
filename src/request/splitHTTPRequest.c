#include "../request.h"

headerLine_t* splitHTTPRequest(char** buffer, int bufferLength) {
  char* message = (*buffer);

  headerLine_t* head = (headerLine_t*) malloc(1 * sizeof(headerLine_t));
  head->next = NULL;
  head->line = NULL;
  int first = 1;

  int start = 0;
  for (int i = 1; i < bufferLength; i++) {
    // Checking for CLRF
    if (message[i - 1] == 13 && message[i] == 10) {
      int end = i - 1;
      int length = end - start;

      char* line = createEmptyCString(length);

      for(int j = 0; j < length; j++) {
        line[j] = message[j + start];
      }

      if (first) {
        head->line = line;
        first = 0;
      }else {
        pushHeaderLine(head, line);
      }

      start = i + 1;
    }
  }

  return head;
}
