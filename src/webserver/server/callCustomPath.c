#include "../server.h"

int compareStringChar(string* str, char* charArr) {
  int charArrLength = strlen(charArr);
  if ((str->length - charArrLength) != 0)
    return -1;

  return strcmp(str->content, charArr);
}

int findPathNode(pathNode_t* head, char method[MAX_METHOD_LENGTH + 1], string* path, pathNode_t** result) {
  pathNode_t* current = head;
  while (current != NULL) {
    string methodStr = {
      .content = method,
      .length = MAX_METHOD_LENGTH
    };
    if (stringCmp(&methodStr, &(current->method)) == 0 && stringCmp(path, &(current->path)) == 0) {
      (*result) = current;
      return 0;
    }

    current = current->next;
  }

  return -1;
}

int callCustomPath(char method[MAX_METHOD_LENGTH + 1], string* path, request* reqPtr, response* respPtr) {
  pathNode_t* node;
  int found = findPathNode(customPaths, method, path, &node);
  if (found != 0)
    return 1;

  return node->funcPtr(reqPtr, respPtr);
}
