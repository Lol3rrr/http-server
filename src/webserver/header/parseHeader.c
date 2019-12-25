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

  strncpy(key->content, headerLine->content, keyLength);

  int index = 0;
  for (int i = 0; i < value->length; i++) {
    if (i == 0 && headerLine->content[seperator + 1 + i] == ' ') {
      continue;
    }

    value->content[index] = headerLine->content[seperator + 1 + i];
    index++;
  }
  value->content[index] = '\0';
  value->length = index;

  *keyPtr = key;
  *valuePtr = value;

  return 0;
}
