#include "../headerFiles/response.h"

int addHeader(response* respPtr, char* key, char* value) {
  int keyLength = strlen(key);
  string* keyStr = createEmptyString(keyLength);
  strncpy(keyStr->content, key, keyLength);

  int valueLength = strlen(value);
  string* valueStr = createEmptyString(valueLength);
  strncpy(valueStr->content, value, valueLength);

  pushHeader(respPtr->headers, keyStr, valueStr);

  free(keyStr);
  free(valueStr);

  return 0;
}
