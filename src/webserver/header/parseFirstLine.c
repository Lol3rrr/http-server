#include "../headerFiles/header.h"

// Returns 0 if worked
int parseFirstLine(string* firstLine, string** methodPtr, string** pathPtr, string** protokolPtr) {
  int start = 0;
  int end = findCharArrAfter(firstLine->content, " ", firstLine->length, 1, start);
  if (end < 0) {
    return -1;
  }
  int length = end - start;
  *methodPtr = createEmptyString(length);
  memcpy((*methodPtr)->content, firstLine->content + start, length);
  start = end + 1;


  end = findCharArrAfter(firstLine->content, " ", firstLine->length, 1, start);
  if (end < 0) {
    return -1;
  }
  length = end - start;
  *pathPtr = createEmptyString(length);
  memcpy((*pathPtr)->content, firstLine->content + start, length);
  start = end + 1;


  end = findCharArrAfter(firstLine->content, " ", firstLine->length, 1, start);
  if (end < 0) {
    end = firstLine->length;
  }
  length = end - start;
  *protokolPtr = createEmptyString(length);
  memcpy((*protokolPtr)->content, firstLine->content + start, length);

  return 0;
}
