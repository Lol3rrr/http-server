#include "../headerFiles/header.h"

// Returns 0 if worked
int parseFirstLine(string* firstLine, string** methodPtr, string** pathPtr, string** protokolPtr) {
  int start = 0;
  int partNumber = 0;
  for (int i = 0; 1; i++) {
    if (firstLine->content[i] == ' ' || i == firstLine->length) {
      int end = i;
      int length = end - start;
      string* part = createEmptyString(length);
      strncpy(part->content, firstLine->content + start, length);

      if (partNumber == 0) {
        *methodPtr = part;
      }
      if (partNumber == 1) {
        *pathPtr = part;
      }
      if (partNumber == 2) {
        *protokolPtr = part;

        break;
      }

      start = i + 1;
      partNumber++;
    }
  }

  return 0;
}
