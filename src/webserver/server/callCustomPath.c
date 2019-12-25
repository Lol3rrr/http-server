#include "../server.h"

int comparePath(string* givenPath, char* requestedPath) {
  int requestedLength = strlen(requestedPath);
  int difference = givenPath->length - requestedLength;
  if (difference != 0)
    return -1;

  return strcmp(givenPath->content, requestedPath);
}

int findPathNode(pathNode_t* head, string* method, string* path, pathNode_t** result) {
  pathNode_t* current = head;
  while (current != NULL) {
    if (strcmp(current->method, method->content) == 0 && comparePath(path, current->path) == 0) {
      (*result) = current;
      return 0;
    }

    current = current->next;
  }

  return -1;
}

int callCustomPath(string* method, string* path, request* reqPtr, response* respPtr) {
  pathNode_t* node;
  int found = findPathNode(customPaths, method, path, &node);
  if (found != 0)
    return -1;

  return node->funcPtr(reqPtr, respPtr);
}
