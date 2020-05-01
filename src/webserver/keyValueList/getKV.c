#include "../headerFiles/keyValueList.h"

int getKV(kvNode_t* head, string* key, kvNode_t** result) {
  kvNode_t* current = head;
  while (current != NULL) {
    string keyStr = {
      .content = current->key,
      .length = current->keyLength
    };
    if (stringCmp(&keyStr, key) == 0) {
      *result = current;

      return 0;
    }

    current = current->next;
  }

  return -1;
}
