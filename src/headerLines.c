#include "headerLines.h"

void pushHeaderLine(node_t* head, char* line) {
  node_t* current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  /* now we can add a new variable */
  current->next = (node_t*) malloc(1 * sizeof(node_t));
  current->next->line = line;
  current->next->next = NULL;
}
void print_headerLine_debug(node_t* head) {
  if (isDebug() == 0) {
    return;
  }

  node_t* current = head;

  while (current != NULL) {
    printf("[Debug] Line: '%s'\n", current->line);
    current = current->next;
  }
}
void cleanHeaderLines(node_t* node) {
  if (node->next != NULL) {
    cleanHeaderLines(node->next);
  }

  free(node->line);
  free(node);
}
