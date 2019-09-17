#include "../headerFiles/header.h"

void pushHeader(headers_t* headers, char* key, char* value) {
  if (headers->kvNodes == NULL) {
    headers->kvNodes = createKVNode(key, value, -1, -1);

    return;
  }

  pushKVNode(headers->kvNodes, key, value, -1, -1);
}
