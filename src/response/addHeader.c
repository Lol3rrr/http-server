#include "../response.h"

int addHeader(response* respPtr, char* key, char* value) {
  int keyLength = getLength(key);
  int valueLength = getLength(value);

  char* keyValue = createEmptyCString(keyLength);
  char* valueValue = createEmptyCString(valueLength);

  strncpy(keyValue, key, keyLength);
  strncpy(valueValue, value, valueLength);

  if (respPtr->headers == NULL) {
    respPtr->headers = (headerNode_t*) malloc(1 * sizeof(headerNode_t));
    respPtr->headers->key = keyValue;
    respPtr->headers->value = valueValue;
    respPtr->headers->next = NULL;

    return 0;
  }

  headerNode_t* head = respPtr->headers;

  pushHeader(head, keyValue, valueValue);

  return 0;
}
