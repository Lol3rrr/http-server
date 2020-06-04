#include "../headerFiles/header.h"

kvNode_t* pushHeader(headers_t* headers, string key, string value) {
  return pushKVList(headers->list, key, value);
}
