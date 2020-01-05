#include "../headerFiles/header.h"

headers_t* parseHeaders(char* message, int length, string** method, string** path, string** protokol) {
  headers_t* result = createEmptyHeaders();

  int firstLineEnd = findCharArr(message, "\r\n", length, 2);
  if (firstLineEnd < 0) {
    return result;
  }

  parseFirstLine(message, firstLineEnd, method, path, protokol);

  char* headers = message + firstLineEnd + 2;
  int headersLength = length - (firstLineEnd + 2);
  int end = findCharArr(headers, "\r\n", headersLength, 2);
  while (end > 0) {
    char* line = headers;
    int lineLength = end;

    parseLine(line, lineLength, &result);

    headers += end + 2;
    headersLength -= end + 2;

    end = findCharArr(headers, "\r\n", headersLength, 2);
  }


  return result;
}
