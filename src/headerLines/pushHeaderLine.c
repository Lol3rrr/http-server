#include "../headerLines.h"

void pushHeaderLine(headerLine_t* head, char* line) {
  headerLine_t* current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  /* now we can add a new variable */
  current->next = (headerLine_t*) malloc(1 * sizeof(headerLine_t));
  current->next->line = line;
  current->next->next = NULL;
}
