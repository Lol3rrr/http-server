#include "../headerFiles/header.h"

// Returns the last index of the first Line
// Or -1 if a problem occured
int parseFirstLine(char* header, int headerLength, string** methodPtr, string** pathPtr, string** protokolPtr) {
  string** parts[3] = {methodPtr, pathPtr, protokolPtr};

  int currentPart = 0;

  int partStart = 0;
  int partEnd = 0;
  for (int i = 0; i < headerLength - 1 && currentPart < 3; i++) {
    if (header[i] == ' ' || header[i] == '\r') {
      int partLength = i - partStart;
      if (partLength <= 0) {
        return -1;
      }

      string* part = createEmptyString(partLength);
      memcpy(part->content, header + partStart, partLength);

      partStart = i + 1;

      *(parts[currentPart]) = part;

      currentPart++;
    }

    if (header[i] == '\r' && header[i + 1] == '\n') {
      return i + 2;
    }
  }

  return -1;
}
