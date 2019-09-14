#include "../server.h"

int comparePath(char* givenPath, char* requestedPath) {
  int givenLength = getStringLength(givenPath);
  int requestedLength = getStringLength(requestedPath);
  int difference = givenLength - requestedLength;
  if (difference != 0)
    return -1;

  int length = givenLength;
  for (int i = 0; i < length; i++) {
    if (givenPath[i] != requestedPath[i])
      return -1;
  }

  return 0;
}

int findPathNode(pathNode_t* head, char* method, char* path, pathNode_t** result) {
  pathNode_t* current = head;
  while (current != NULL) {
    if (strcmp(current->method, method) == 0 && comparePath(path, current->path) == 0) {
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
