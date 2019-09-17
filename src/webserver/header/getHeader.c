#include "../headerFiles/header.h"

int getHeader(headers_t* headers, char* key, kvNode_t** result) {
  return getKV(headers->kvNodes, key, result);
}
