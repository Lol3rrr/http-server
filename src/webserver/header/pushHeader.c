#include "../headerFiles/header.h"

void pushHeader(headers_t* headers, string* key, string* value) {
  if (headers->kvNodes == NULL) {
    headers->kvNodes = createKVNode(key->content, value->content, -1, -1);

    return;
  }

  pushKVNode(headers->kvNodes, key->content, value->content, -1, -1);
}
