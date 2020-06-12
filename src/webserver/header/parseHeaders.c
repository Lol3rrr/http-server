#include "../headerFiles/header.h"

int parseHeaders(char* headers, int headersLength, headers_t* result, int* headerEnd) {
  char* tmpHeaders = headers;

  int keyStart = 0;
  int keyEnd = 0;
  int valueStart = 0;
  int valueEnd = 0;
  
  char* end = tmpHeaders + headersLength - 3;
  while (tmpHeaders < end) {
    keyEnd = keyStart;
    while (*tmpHeaders != ':') {
      keyEnd++;
      tmpHeaders++;
    }
    tmpHeaders += 2;
    valueStart = keyEnd + 2;
    valueEnd = valueStart;
    while (*tmpHeaders != '\r') {
      valueEnd++;
      tmpHeaders++;
    }

    int keyLength = keyEnd - keyStart;
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
    pushKVList(&(result->list), key, value);

    tmpHeaders += 2;
    keyStart = valueEnd + 2;

    if (*tmpHeaders == '\r') {
      *headerEnd = (int) ((tmpHeaders + 2) - headers);
      return 0;
    }
  }

  return 0;
}
