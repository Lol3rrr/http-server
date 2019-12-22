#include "../headerFiles/response.h"

int createFirstLine(response* respPtr, char** result) {
  char statusCode[12];
  sprintf(statusCode, "%d", respPtr->statusCode);
  int statusCodeLength = getStringLength(statusCode);

  int totalLength = respPtr->protokol->length + 1 + statusCodeLength + 1 + respPtr->statusMessage->length + 2;

  char* firstLine = createEmptyCString(totalLength);

  int lineOffset = 0;

  for(int i = 0; i < respPtr->protokol->length; i++) {
    firstLine[lineOffset] = respPtr->protokol->content[i];
    lineOffset++;
  }
  firstLine[lineOffset] = ' ';
  lineOffset++;

  for(int i = 0; i < statusCodeLength; i++) {
    firstLine[lineOffset] = statusCode[i];
    lineOffset++;
  }
  firstLine[lineOffset] = ' ';
  lineOffset++;

  for(int i = 0; i < respPtr->statusMessage->length; i++) {
    firstLine[lineOffset] = respPtr->statusMessage->content[i];
    lineOffset++;
  }
  firstLine[lineOffset] = '\r';
  lineOffset++;
  firstLine[lineOffset] = '\n';

  *result = firstLine;

  return totalLength;
}
