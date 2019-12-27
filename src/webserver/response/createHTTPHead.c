#include "../headerFiles/response.h"

int createHTTPHead(response* respPtr, char** result) {
  char spacer[2] = {'\r', '\n'};
  int spacerLength = 2;

  char* firstLine;
  int firstLineLength = createFirstLine(respPtr, &firstLine);

  char* headerPart;
  int headerLength = createHTTPHeaderPart(respPtr, spacer, spacerLength, &headerPart);

  int totalLength = firstLineLength + headerLength + spacerLength;
  char* head = createEmptyCString(totalLength);

  memcpy(head, firstLine, firstLineLength);
  memcpy(head + firstLineLength, headerPart, headerLength);
  memcpy(head + firstLineLength + headerLength, spacer, spacerLength);

  free(firstLine);
  free(headerPart);

  *result = head;

  return totalLength;
}
