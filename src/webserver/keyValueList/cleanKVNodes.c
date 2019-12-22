#include "../headerFiles/keyValueList.h"

void cleanKVNodes(kvNode_t* current) {
  if (current->next != NULL)
    cleanKVNodes(current->next);

  free(current->key->content);
  free(current->key);
  free(current->value->content);
  free(current->value);
  free(current);
}
