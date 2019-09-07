#include "../response.h"

int createHTTPHead(response* respPtr, char** result) {
  char spacer[2] = {'\r', '\n'};
  int spacerLength = 2;

  char* firstLine;
  int firstLineLength = createFirstLine(respPtr, &firstLine);

  char* headerPart;
  int headerLength = createHTTPHeaderPart(respPtr, spacer, &headerPart);

  int totalLength = firstLineLength + headerLength + spacerLength;
  char* head = (char*) malloc((totalLength + 1) * sizeof(char));
  head[totalLength] = '\0';

  int headOffset = 0;
  for(int i = 0; i < firstLineLength; i++) {
    head[headOffset] = firstLine[i];
    headOffset++;
  }
  for(int i = 0; i < headerLength; i++) {
    head[headOffset] = headerPart[i];
    headOffset++;
  }
  for(int i = 0; i < spacerLength; i++) {
    head[headOffset] = spacer[i];
    headOffset++;
  }

  free(firstLine);
  free(headerPart);

  *result = head;

  return totalLength;
}
