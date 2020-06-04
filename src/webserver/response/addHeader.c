#include "../headerFiles/response.h"

int addHeader(response* respPtr, string key, string value) {
  string keyStr = {
    .content = createEmptyCString(key.length),
    .length = key.length
  };
  memcpy(keyStr.content, key.content, key.length);

  string valueStr = {
    .content = createEmptyCString(value.length),
    .length = value.length
  };
  memcpy(valueStr.content, value.content, value.length);

  pushKVList(&(respPtr->headerList), keyStr, valueStr);

  return 0;
}
