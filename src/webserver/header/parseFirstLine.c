#include "../headerFiles/header.h"

// Returns 0 if worked
int parseFirstLine(char* firstLine, char** methodPtr, string** pathPtr, char** protokolPtr) {
  int start = 0;
  int partNumber = 0;
  for (int i = 0; 1; i++) {
    if (firstLine[i] == ' ' || firstLine[i] == '\0') {
      int end = i;
      int length = end - start;
      char* part = createEmptyCString(length);

      for(int j = 0; j < length; j++) {
        part[j] = firstLine[start + j];
      }

      if (partNumber == 0) {
        *methodPtr = part;
      }
      if (partNumber == 1) {
        *pathPtr = createEmptyString(length);
        strncpy((*pathPtr)->content, part, length);
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
