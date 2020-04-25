#include "../headerFiles/header.h"

kvNode_t* pushHeader(headers_t* headers, string* key, string* value) {
  return pushKVNode(&(headers->kvNodes), key, value);
}
