#include "../headerFiles/keyValueList.h"

int getKV(kvNode_t* head, string* key, kvNode_t** result) {
  kvNode_t* current = head;
  while (current != NULL) {
    if (current->key->length == key->length && strcmp(key->content, current->key->content) == 0) {
      *result = current;

      return 0;
    }

    current = current->next;
  }

  return -1;
}
