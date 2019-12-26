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
  
  strncpy(head, firstLine, firstLineLength);
  strncpy(head + firstLineLength, headerPart, headerLength);
  strncpy(head + firstLineLength + headerLength, spacer, spacerLength);

  free(firstLine);
  free(headerPart);

  *result = head;

  return totalLength;
}
