#include "../server.h"

int comparePath(string* givenPath, char* requestedPath) {
  int requestedLength = getStringLength(requestedPath);
  int difference = givenPath->length - requestedLength;
  if (difference != 0)
    return -1;

  int length = givenPath->length;
  for (int i = 0; i < length; i++) {
    if (givenPath->content[i] != requestedPath[i])
      return -1;
  }

  return 0;
}

int findPathNode(pathNode_t* head, char* method, string* path, pathNode_t** result) {
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

int callCustomPath(char* method, string* path, request* reqPtr, response* respPtr) {
  pathNode_t* node;
  int found = findPathNode(customPaths, method, path, &node);
  if (found != 0)
    return -1;

  return node->funcPtr(reqPtr, respPtr);
}
