#include "../headerFiles/header.h"

int parseFirstLine(char* header, int headerLength, string* method, string* pathPtr, string* protokolPtr) {
  string* parts[3] = {method, pathPtr, protokolPtr};

  int currentPart = 0;

  int partStart = 0;
  int partEnd = 0;
  for (int i = 0; i < headerLength - 1 && currentPart < 3; i++) {
    if (header[i] == ' ' || header[i] == '\r') {
      int partLength = i - partStart;
      if (partLength <= 0) {
        return -1;
      }

      if (currentPart == 1 && header[i] == '.' && header[i+1] == '.') {
        return -2;
      }

      parts[currentPart]->length = partLength;
      parts[currentPart]->content = header + partStart;
      parts[currentPart]->needsFree = 0;

      partStart = i + 1;

      currentPart++;

      if (currentPart == 3 && header[i + 1] == '\n') {
        return i + 2;
      }
    }
  }

  return -1;
}
