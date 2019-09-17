#include "../headerFiles/header.h"

headers_t* createEmptyHeaders() {
  headers_t* result = (headers_t*) malloc(1 * sizeof(headers_t));

  result->kvNodes = NULL;

  return result;
}
