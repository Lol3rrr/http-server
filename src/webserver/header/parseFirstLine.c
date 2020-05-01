#include "../headerFiles/header.h"

int parseFirstLine(char* header, int headerLength, char (*methodPtr)[MAX_METHOD_LENGTH + 1], string* pathPtr, string* protokolPtr) {
  string* parts[2] = {pathPtr, protokolPtr};

  int currentPart = 0;

  int partStart = 0;
  int partEnd = 0;
  for (int i = 0; i < headerLength - 1 && currentPart < 3; i++) {
    if (header[i] == '.' && header[i + 1] == '.') {
      return -2;
    }

    if (header[i] == ' ' || header[i] == '\r') {
      int partLength = i - partStart;
      if (partLength <= 0) {
        return -1;
      }

      if (currentPart == 0) {
        if (partLength > MAX_METHOD_LENGTH) {
          return -1;
        }
        memcpy(methodPtr, header + partStart, partLength);
      } else {
        parts[currentPart - 1]->length = partLength;
        parts[currentPart - 1]->content = createEmptyCString(partLength);
        memcpy(parts[currentPart - 1]->content, header + partStart, partLength);
      }

      partStart = i + 1;

      currentPart++;
    }

    if (header[i] == '\r' && header[i + 1] == '\n') {
      return i + 2;
    }
  }

  return -1;
}
