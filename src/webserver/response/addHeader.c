#include "../headerFiles/response.h"

int addHeader(response* respPtr, char* key, char* value) {
  int keyLength = strlen(key);
  string keyStr = {
    .content = createEmptyCString(keyLength),
    .length = keyLength
  };
  memcpy(keyStr.content, key, keyLength);

  int valueLength = strlen(value);
  string valueStr = {
    .content = createEmptyCString(valueLength),
    .length = valueLength
  };
  memcpy(valueStr.content, value, valueLength);

  pushHeader(&(respPtr->headers), &keyStr, &valueStr);

  return 0;
}
