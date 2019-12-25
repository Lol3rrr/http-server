#include "../headerFiles/response.h"

int createFirstLine(response* respPtr, char** result) {
  char statusCode[12];
  sprintf(statusCode, "%d", respPtr->statusCode);
  int statusCodeLength = strlen(statusCode);

  int totalLength = respPtr->protokol->length + 1 + statusCodeLength + 1 + respPtr->statusMessage->length + 2;

  char* firstLine = createEmptyCString(totalLength);
  int lineOffset = 0;
  strncpy(firstLine + lineOffset, respPtr->protokol->content, respPtr->protokol->length);
  lineOffset += respPtr->protokol->length;
  strncpy(firstLine + lineOffset, " ", 1);
  lineOffset++;
  strncpy(firstLine + lineOffset, statusCode, statusCodeLength);
  lineOffset += statusCodeLength;
  strncpy(firstLine + lineOffset, " ", 1);
  lineOffset++;
  strncpy(firstLine + lineOffset, respPtr->statusMessage->content, respPtr->statusMessage->length);
  lineOffset += respPtr->statusMessage->length;
  strncpy(firstLine + lineOffset, "\r", 1);
  lineOffset++;
  strncpy(firstLine + lineOffset, "\n", 1);
  lineOffset++;

  *result = firstLine;

  return totalLength;
}
