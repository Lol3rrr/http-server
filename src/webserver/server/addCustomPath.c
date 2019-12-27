#include "../server.h"

void addCustomPath(char* rawMethod, char* rawPath, int (*funcPtr)(request* reqPtr, response* respPtr)) {
  int methodLength = strlen(rawMethod);
  string* method = createEmptyString(methodLength);
  memcpy(method->content, rawMethod, methodLength);

  int pathLength = strlen(rawPath);
  string* path = createEmptyString(pathLength);
  memcpy(path->content, rawPath, pathLength);

  pathNode_t* nPath = (pathNode_t*) malloc(1 * sizeof(pathNode_t));
  nPath->method = method;
  nPath->path = path;
  nPath->funcPtr = funcPtr;
  nPath->next = NULL;

  if (!customPathEnabled) {
    customPaths = nPath;
    customPathEnabled = 1;
    return;
  }

  pathNode_t* current = customPaths;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = nPath;
}
