#include "../headerFiles/header.h"

// Returns 0 if worked
int parseHeader(string* headerLine, char** keyPtr, char** valuePtr) {
  int seperator = findStr(headerLine->content, ":", headerLine->length, 1);
  if (seperator == -1) {
    return 1;
  }

  int keyLength = seperator;
  int valueLength = headerLine->length - seperator;

  char* key = createEmptyCString(keyLength);
  char* value = (char*) malloc((valueLength + 1) * sizeof(char));

  strncpy(key, headerLine->content, keyLength);

  int index = 0;
  for (int i = 0; i < valueLength; i++) {
    if (i == 0 && headerLine->content[seperator + 1 + i] == ' ') {
      continue;
    }

    value[index] = headerLine->content[seperator + 1 + i];
    index++;
  }
  value[index] = '\0';

  *keyPtr = key;
  *valuePtr = value;

  return 0;
}
