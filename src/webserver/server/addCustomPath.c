#include "../server.h"

void pushPath(char* method, char* path, int (*funcPtr)(request* reqPtr, response* respPtr)) {
  pathNode_t* current = customPaths;
  while (current->next != NULL) {
    current = current->next;
  }

  current->next = (pathNode_t*) malloc(1 * sizeof(pathNode_t));
  current->next->method = method;
  current->next->path = path;
  current->next->funcPtr = funcPtr;
  current->next->next = NULL;
}

void addPath(char* method, char* path, int (*funcPtr)(request* reqPtr, response* respPtr)) {
  customPaths = (pathNode_t*) malloc(1 * sizeof(pathNode_t));
  customPaths->method = method;
  customPaths->path = path;
  customPaths->funcPtr = funcPtr;
  customPaths->next = NULL;
}

void addCustomPath(char* method, char* path, int (*funcPtr)(request* reqPtr, response* respPtr)) {
  if (customPathEnabled)
    pushPath(method, path, funcPtr);
  else
    addPath(method, path, funcPtr);

  customPathEnabled = 1;
}
