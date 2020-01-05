#include "../headerFiles/header.h"

void parseLine(char* line, int length, headers_t** headers) {
  int seperator = findCharArr(line, ": ", length, 2);
  if (seperator < 0) {
    return;
  }

  int keyLength = seperator - 0;
  int valueLength = length - (seperator + 2);

  string* key = getSubstring(line, 0, keyLength);
  string* value = getSubstring(line, seperator + 2, valueLength);

  pushHeader((*headers), key, value);
}
