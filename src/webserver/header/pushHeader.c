#include "../headerFiles/header.h"

void pushHeader(headers_t* headers, string* key, string* value) {
  if (headers->kvNodes == NULL) {
    headers->kvNodes = createKVNode(key, value);

    return;
  }

  pushKVNode(headers->kvNodes, key, value);
}
