#include "../headerFiles/header.h"

// Returns 0 if worked
int parseHeader(char* headerLine, char** keyPtr, char** valuePtr) {
  int totalLength = getStringLength(headerLine);
  int seperator = findStr(headerLine, ":", totalLength, 1);

  if (seperator == -1) {
    return 1;
  }

  int keyLength = seperator;
  int valueLength = totalLength - seperator;

  char* key = createEmptyCString(keyLength);
  char* value = (char*) malloc((valueLength + 1) * sizeof(char));

  for (int i = 0; i < keyLength; i++) {
    key[i] = headerLine[i];
  }

  int index = 0;
  for (int i = 0; i < valueLength; i++) {
    if (i == 0 && headerLine[seperator + 1 + i] == ' ') {
      continue;
    }

    value[index] = headerLine[seperator + 1 + i];
    index++;
  }
  value[index] = '\0';

  *keyPtr = key;
  *valuePtr = value;

  return 0;
}
