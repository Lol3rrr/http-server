#include "../headerFiles/keyValueList.h"

void cleanKVNodes(kvNode_t* current) {
  if (!current) {
    return;
  }
  
  if (current->next != NULL)
    cleanKVNodes(current->next);

  cleanString(current->key);
  cleanString(current->value);

  free(current);
}
