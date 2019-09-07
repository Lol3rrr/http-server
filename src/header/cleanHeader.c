#include "../header.h"

void cleanHeader(headerNode_t* node) {
  if (node == NULL) {
    return;
  }

  if (node->next != NULL) {
    cleanHeader(node->next);
  }

  free(node->key);
  free(node->value);
  free(node);
}
