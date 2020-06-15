#include "../headerFiles/response.h"

int getFirstLineLength(response* respPtr) {
  char statusCode[12];
  int statusCodeLength = citoa(respPtr->statusCode, statusCode);

  int totalLength = respPtr->protokol.length + 1 + statusCodeLength + 1 + respPtr->statusMessage.length + 2;

  return totalLength;
}

int createFirstLine(response* respPtr, char* firstLine) {
  char statusCode[12];
  int statusCodeLength = citoa(respPtr->statusCode, statusCode);

  int totalLength = respPtr->protokol.length + 1 + statusCodeLength + 1 + respPtr->statusMessage.length + 2;

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
  memcpy(firstLine + lineOffset, "\r\n", 2);
  lineOffset += 2;

  return totalLength;
}
