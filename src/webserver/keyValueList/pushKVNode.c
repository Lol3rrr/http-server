#include "../headerFiles/keyValueList.h"

void pushKVNode(kvNode_t* head, char* key, char* value, int pKeyLength, int pValueLength) {
  int keyLength = pKeyLength;
  int valueLength = pValueLength;
  if (keyLength == -1)
    keyLength = getStringLength(key);
  if (valueLength == -1)
    valueLength = getStringLength(value);


  kvNode_t* current = head;
  while (current->next != NULL)
    current = current->next;

  current->next = (kvNode_t*) malloc(1 * sizeof(kvNode_t));

  current->next->key = createEmptyCString(keyLength);
  for (int i = 0; i < keyLength; i++)
    current->next->key[i] = key[i];
  current->next->value = createEmptyCString(valueLength);
  for (int i = 0; i < valueLength; i++)
    current->next->value[i] = value[i];

  current->next->next = NULL;
}
