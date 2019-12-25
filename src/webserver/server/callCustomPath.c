#include "../server.h"

int compareStringChar(string* str, char* charArr) {
  int charArrLength = strlen(charArr);
  if ((str->length - charArrLength) != 0)
    return -1;

  return strcmp(str->content, charArr);
}

int findPathNode(pathNode_t* head, string* method, string* path, pathNode_t** result) {
  pathNode_t* current = head;
  while (current != NULL) {
    if (compareStringChar(method, current->method) == 0 && compareStringChar(path, current->path) == 0) {
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
