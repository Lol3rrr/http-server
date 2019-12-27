#include "../headerFiles/header.h"

int getHeader(headers_t* headers, char* key, kvNode_t** result) {
  int keyLength = strlen(key);
  string* keyStr = createEmptyString(keyLength);
  memcpy(keyStr->content, key, keyLength);

  return getKV(headers->kvNodes, keyStr, result);
}
