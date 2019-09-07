#include "../header.h"

int getHeader(headerNode_t* head, char* key, headerNode_t** result) {
  headerNode_t* current = head;
  while (current != NULL) {
    if (strcmp(current->key, key) == 0) {
      *result = current;

      return 0;
    }

    current = current->next;
  }

  return -1;
}
