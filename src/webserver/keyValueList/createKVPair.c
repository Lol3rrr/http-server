#include "../headerFiles/keyValueList.h"

int createKVPair(kvNode_t* node, char** result) {
  int keyLength = getStringLength(node->key);
  int valueLength = getStringLength(node->value);

  int totalLength = keyLength + 2 + valueLength;

  (*result) = createEmptyCString(totalLength);

  int index = 0;
  for(int i = 0; i < keyLength; i++) {
    (*result)[index] = node->key[i];
    index++;
  }
  (*result)[index] = ':';
  index++;
  (*result)[index] = ' ';
  index++;
  for(int i = 0; i < valueLength; i++) {
    (*result)[index] = node->value[i];
    index++;
  }

  return totalLength;
}
