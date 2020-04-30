#include "../headerFiles/header.h"

int getHeader(headers_t* headers, char* key, kvNode_t** result) {
  int keyLength = strlen(key);
  string keyStr = {
    content: key,
    length: keyLength
  };

  int worked = getKV(headers->kvNodes.next, &keyStr, result);

  return worked;
}
