#include "../headerFiles/header.h"

headerNode_t* createEmptyHeaderNode_t() {
  headerNode_t* result = (headerNode_t*) malloc(1 * sizeof(headerNode_t));

  result->key = NULL;
  result->value = NULL;
  result->next = NULL;

  return result;
}
