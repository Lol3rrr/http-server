#include "../headerFiles/header.h"

// Returns 0 if worked
int parseFirstLine(string* firstLine, string** methodPtr, string** pathPtr, string** protokolPtr) {
  int start = 0;
  int end = findCharArr(firstLine->content + start, " ", firstLine->length - start, 1);
  if (end < 0) {
    return -1;
  }
  end += start;
  int length = end - start;
  *methodPtr = createEmptyString(length);
  strncpy((*methodPtr)->content, firstLine->content + start, length);
  start = end + 1;


  end = findCharArr(firstLine->content + start, " ", firstLine->length - start, 1);
  if (end < 0) {
    return -1;
  }
  end += start;
  length = end - start;
  *pathPtr = createEmptyString(length);
  strncpy((*pathPtr)->content, firstLine->content + start, length);
  start = end + 1;


  end = findCharArr(firstLine->content + start, " ", firstLine->length - start, 1);
  if (end < 0) {
    end = firstLine->length - start;
  }
  end += start;
  length = end - start;
  *protokolPtr = createEmptyString(length);
  strncpy((*protokolPtr)->content, firstLine->content + start, length);

  return 0;
}
