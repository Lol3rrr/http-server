#include "../headerFiles/header.h"

void print_header_debug(headerNode_t* head) {
  if (isDebugEnabled() == 0) {
    return;
  }

  headerNode_t* current = head;

  while (current != NULL) {
    logDebug("[Header] Key: '%s' Value: '%s'\n", current->key, current->value);
    current = current->next;
  }
}
