#include "../headerFiles/header.h"

kvNode_t* pushHeader(headers_t* headers, string* key, string* value) {
  if (headers->kvNodes == NULL) {
    headers->kvNodes = createKVNode(key, value);

    return headers->kvNodes;
  }

  return pushKVNode(headers->kvNodes, key, value);
}
