#include "../headerFiles/keyValueList.h"

void cleanKVNodes(kvNode_t* current) {
  if (!current) {
    return;
  }
  
  if (current->next != NULL)
    cleanKVNodes(current->next);

  if (current->keyFree && current->key)
    free(current->key);
  if (current->valueFree && current->value)
    free(current->value);
  free(current);
}
