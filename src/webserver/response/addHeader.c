#include "../headerFiles/response.h"

int addHeader(response* respPtr, string key, string value) {
  string keyStr = {
    .content = createEmptyCString(key.length),
    .length = key.length,
    .needsFree = 1
  };
  memcpy(keyStr.content, key.content, key.length);

  string valueStr = {
    .content = createEmptyCString(value.length),
    .length = value.length,
    .needsFree = 1
  };
  memcpy(valueStr.content, value.content, value.length);

  pushKVList(&(respPtr->headerList), keyStr, valueStr);
  respPtr->headerResponseSize += key.length + 2 + value.length + 2;

  return 0;
}
