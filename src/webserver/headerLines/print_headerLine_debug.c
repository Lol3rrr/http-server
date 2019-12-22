#include "../headerFiles/headerLines.h"

void print_headerLine_debug(headerLine_t* head) {
  if (isDebugEnabled() == 0) {
    return;
  }

  headerLine_t* current = head;
  while (current != NULL) {
    logDebug("Line: '%s'\n", current->line->content);
    current = current->next;
  }
}
