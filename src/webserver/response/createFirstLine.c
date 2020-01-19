#include "../headerFiles/response.h"

int createFirstLine(response* respPtr, char** result) {
  char statusCode[12];
  itoa(respPtr->statusCode, statusCode);
  int statusCodeLength = strlen(statusCode);

  int totalLength = respPtr->protokol.length + 1 + statusCodeLength + 1 + respPtr->statusMessage.length + 2;

  char* firstLine = createEmptyCString(totalLength);
  int lineOffset = 0;
  memcpy(firstLine + lineOffset, respPtr->protokol.content, respPtr->protokol.length);
  lineOffset += respPtr->protokol.length;
  memcpy(firstLine + lineOffset, " ", 1);
  lineOffset++;
  memcpy(firstLine + lineOffset, statusCode, statusCodeLength);
  lineOffset += statusCodeLength;
  memcpy(firstLine + lineOffset, " ", 1);
  lineOffset++;
  memcpy(firstLine + lineOffset, respPtr->statusMessage.content, respPtr->statusMessage.length);
  lineOffset += respPtr->statusMessage.length;
  memcpy(firstLine + lineOffset, "\r", 1);
  lineOffset++;
  memcpy(firstLine + lineOffset, "\n", 1);
  lineOffset++;

  *result = firstLine;

  return totalLength;
}
