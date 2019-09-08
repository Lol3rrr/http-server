#include "../response.h"

int createFirstLine(response* respPtr, char** result) {
  clock_t startTime = clock();

  int protokolLength = getStringLength(respPtr->protokol);

  char statusCode[12];
  sprintf(statusCode, "%d", respPtr->statusCode);
  int statusCodeLength = getStringLength(statusCode);
  int statusMessageLength = getStringLength(respPtr->statusMessage);

  int totalLength = protokolLength + 1 + statusCodeLength + 1 + statusMessageLength + 2;

  char* firstLine = createEmptyCString(totalLength);

  int lineOffset = 0;

  for(int i = 0; i < protokolLength; i++) {
    firstLine[lineOffset] = respPtr->protokol[i];
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

  for(int i = 0; i < statusMessageLength; i++) {
    firstLine[lineOffset] = respPtr->statusMessage[i];
    lineOffset++;
  }
  firstLine[lineOffset] = '\r';
  lineOffset++;
  firstLine[lineOffset] = '\n';

  *result = firstLine;

  clock_t endTime = clock();
  if (isMeasuring()) {
    double time_spent = (double) (endTime - startTime) / CLOCKS_PER_SEC;
    printf("[Measuring][createFirstLine] Took %f Seconds \n", time_spent);
  }

  return totalLength;
}
