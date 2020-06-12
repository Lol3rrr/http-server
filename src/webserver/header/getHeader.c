#include "../headerFiles/header.h"

int getHeader(headers_t* headers, char* key, kvNode_t** result) {
  int keyLength = strlen(key);
  string keyStr = {
    .content = key,
    .length = keyLength,
    .needsFree = 0
  };

  return findKV(headers->list, keyStr, result);
}
