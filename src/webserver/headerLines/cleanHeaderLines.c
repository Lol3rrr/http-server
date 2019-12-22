#include "../headerFiles/headerLines.h"

void cleanHeaderLines(headerLine_t* node) {
  if (node->next != NULL) {
    cleanHeaderLines(node->next);
  }

  if (node->line != NULL) {
    free(node->line->content);
    free(node->line);
  }

  free(node);
}
