#include "../headerFiles/header.h"

// Returns 0 if worked
int parseFirstLine(char* line, int lineLength, string** methodPtr, string** pathPtr, string** protokolPtr) {
  int start = 0;
  int end = findCharArrAfter(line, " ", lineLength, 1, start);
  if (end < 0) {
    return -1;
  }
  int length = end - start;
  *methodPtr = createEmptyString(length);
  memcpy((*methodPtr)->content, line + start, length);
  start = end + 1;


  end = findCharArrAfter(line, " ", lineLength, 1, start);
  if (end < 0) {
    return -1;
  }
  length = end - start;
  *pathPtr = createEmptyString(length);
  memcpy((*pathPtr)->content, line + start, length);
  start = end + 1;


  end = findCharArrAfter(line, " ", lineLength, 1, start);
  if (end < 0) {
    end = lineLength;
  }
  length = end - start;
  *protokolPtr = createEmptyString(length);
  memcpy((*protokolPtr)->content, line + start, length);

  return 0;
}
