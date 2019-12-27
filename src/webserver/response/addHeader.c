#include "../headerFiles/response.h"

int addHeader(response* respPtr, char* key, char* value) {
  int keyLength = strlen(key);
  string* keyStr = createEmptyString(keyLength);
  memcpy(keyStr->content, key, keyLength);

  int valueLength = strlen(value);
  string* valueStr = createEmptyString(valueLength);
  memcpy(valueStr->content, value, valueLength);

  pushHeader(respPtr->headers, keyStr, valueStr);

  return 0;
}
