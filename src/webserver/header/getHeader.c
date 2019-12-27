#include "../headerFiles/header.h"

int getHeader(headers_t* headers, char* key, kvNode_t** result) {
  int keyLength = strlen(key);
  string* keyStr = createEmptyString(keyLength);
  memcpy(keyStr->content, key, keyLength);

  int worked = getKV(headers->kvNodes, keyStr, result);

  free(keyStr->content);
  free(keyStr);

  return worked;
}
