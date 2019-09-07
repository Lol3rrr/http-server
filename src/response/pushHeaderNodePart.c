#include "../response.h"

void pushHeaderNodePart(headerPartNode_t* head, char* content, int length) {
  headerPartNode_t* current = head;

  while (current->next != NULL) {
    current = current->next;
  }

  current->next = (headerPartNode_t*) malloc(1 * sizeof(headerPartNode_t));
  current->next->content = content;
  current->next->length = length;
  current->next->next = NULL;
}
