#include "../headerFiles/keyValueList.h"

kvNode_t* createKVNode(char* key, char* value, int pKeyLength, int pValueLength) {
  int keyLength = pKeyLength;
  int valueLength = pValueLength;

  if (keyLength < 0)
    keyLength = getStringLength(key);
  if (valueLength < 0)
    valueLength = getStringLength(value);

  kvNode_t* node = (kvNode_t*) malloc(1 * sizeof(kvNode_t));

  node->key = createEmptyCString(keyLength);
  for (int i = 0; i < keyLength; i++)
    node->key[i] = key[i];
  node->value = createEmptyCString(valueLength);
  for (int i = 0; i < valueLength; i++)
    node->value[i] = value[i];
  node->next = NULL;

  return node;
}
