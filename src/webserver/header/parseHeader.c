#include "../headerFiles/header.h"

// Returns 0 if worked
int parseHeader(string* headerLine, string** keyPtr, string** valuePtr) {
  int seperator = findStr(headerLine, ":", 1);
  if (seperator == -1) {
    return 1;
  }

  int keyLength = seperator;
  int valueLength = headerLine->length - seperator;

  string* key = createEmptyString(keyLength);
  string* value = createEmptyString(valueLength);

  memcpy(key->content, headerLine->content, keyLength);

  int start = seperator + 1;
  if (headerLine->content[start] == ' ') {
    start++;
    valueLength--;
  }
  memcpy(value->content, headerLine->content + start, valueLength);

  *keyPtr = key;
  *valuePtr = value;

  return 0;
}
