#include "../headerFiles/response.h"

int createHTTPHead(response* respPtr, char** result) {
  char spacer[2] = {'\r', '\n'};
  int spacerLength = 2;

  int firstLineLength = getFirstLineLength(respPtr);
  int headerLength = getHTTPHeaderPartLength(respPtr, spacerLength);

  int totalLength = firstLineLength + headerLength + spacerLength;
  char* head = createEmptyCString(totalLength);

  createFirstLine(respPtr, head);
  createHTTPHeaderPart(respPtr, spacer, spacerLength, head + firstLineLength);

  memcpy(head + firstLineLength + headerLength, spacer, spacerLength);

  *result = head;

  return totalLength;
}
