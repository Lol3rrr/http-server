#include "../headerFiles/headerLines.h"

void print_headerLine_debug(headerLine_t* head) {
  if (isDebugEnabled() == 0) {
    return;
  }

  headerLine_t* current = head;

  while (current != NULL) {
    printf("[Debug] Line: '%s'\n", current->line);
    current = current->next;
  }
}
