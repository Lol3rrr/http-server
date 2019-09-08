#include "../headerFiles/response.h"

void cleanHeaderNodePart(headerPartNode_t* node) {
  if (node->next != NULL) {
    cleanHeaderNodePart(node->next);
  }

  free(node->content);
  free(node);
}
