#include "../headerFiles/header.h"

headers_t createEmptyHeaders() {
  headers_t result;

  result.kvNodes.key = NULL;
  result.kvNodes.value = NULL;
  result.kvNodes.next = NULL;

  return result;
}
