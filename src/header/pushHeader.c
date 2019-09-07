#include "../header.h"

void pushHeader(headerNode_t* head, char* key, char* value) {
  headerNode_t* current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  /* now we can add a new variable */
  current->next = (headerNode_t*) malloc(1 * sizeof(headerNode_t));
  current->next->key = key;
  current->next->value = value;
  current->next->next = NULL;
}
