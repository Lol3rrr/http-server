#include "../server.h"

pathNode_t* findPathNode(pathNode_t* head, char* method, char* path) {
  pathNode_t* current = head;
  while (current->next != NULL) {
    if (strcmp(current->method, method) && strcmp(current->path, path))
      return current;

    current = current->next;
  }

  return NULL;
}

int callCustomPath(char* method, char* path, request* reqPtr, response* respPtr) {
  pathNode_t* node = findPathNode(customPaths, method, path);
  if (node == NULL)
    return -1;

  return node->funcPtr(reqPtr, respPtr);
}
