#include "../headerFiles/header.h"

headers_t createEmptyHeaders() {
  headers_t result;

  result.kvNodes.key.content = NULL;
  result.kvNodes.key.length = -1;
  result.kvNodes.value.content = NULL;
  result.kvNodes.value.length = -1;
  result.kvNodes.next = NULL;

  return result;
}
