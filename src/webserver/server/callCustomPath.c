#include "../server.h"

int findPathNode(pathNode_t* head, char* method, char* path, pathNode_t** result) {
  pathNode_t* current = head;
  while (current != NULL) {
    if (strcmp(current->method, method) == 0 && strcmp(current->path, path) == 0) {
      (*result) = current;
      return 0;
    }

    current = current->next;
  }

  return -1;
}

int callCustomPath(char* method, char* path, request* reqPtr, response* respPtr) {
  pathNode_t* node;
  int found = findPathNode(customPaths, method, path, &node);
  if (found != 0)
    return -1;

  return node->funcPtr(reqPtr, respPtr);
}
