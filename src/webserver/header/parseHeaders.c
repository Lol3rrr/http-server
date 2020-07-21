#include "../headerFiles/header.h"

int parseHeaders(char* headers, int headersLength, headers_t* result) {
  int index = 0;
  
  kvList_t* headerList = &(result->list);

  int end = headersLength - 3;
  while (index < end) {
    int keyStart = index;
    while (headers[index] != ' ') {
      index++;
    }
    int keyEnd = index;

    index++;

    int valueStart = index;
    while (headers[index] != '\r') {
      index++;
    }
    int valueEnd = index;

    int keyLength = keyEnd - keyStart - 1;
    int valueLength = valueEnd - valueStart;

    string key = {
      .content = headers + keyStart,
      .length = keyLength,
      .needsFree = 0
    };
    string value = {
      .content = headers + valueStart,
      .length = valueLength,
      .needsFree = 0
    };
    pushKVList(headerList, key, value);

    index += 2;

    if (headers[index] == '\r') {
      return index + 2;
    }
  }

  return -1;
}
