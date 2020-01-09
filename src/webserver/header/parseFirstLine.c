#include "../headerFiles/header.h"

// Returns the last index of the first Line
// Or -1 if a problem occured
int parseFirstLine(char* header, int headerLength, string** methodPtr, string** pathPtr, string** protokolPtr) {
  int currentPart = 0;

  int partStart = 0;
  int partEnd = 0;
  for (int i = 0; i < headerLength - 1; i++) {
    if (header[i] == ' ' || header[i] == '\r') {
      int partLength = i - partStart;
      if (partLength <= 0) {
        return -1;
      }

      string* part = createEmptyString(partLength);
      memcpy(part->content, header + partStart, partLength);

      partStart = i + 1;

      if (currentPart == 0) {
        *methodPtr = part;
      }else if (currentPart == 1) {
        *pathPtr = part;
      }else if (currentPart == 2) {
        *protokolPtr = part;
      }else {
        free(part->content);
        free(part);
      }

      currentPart++;
    }

    if (header[i] == '\r' && header[i + 1] == '\n') {
      return i + 2;
    }
  }

  return -1;
}
