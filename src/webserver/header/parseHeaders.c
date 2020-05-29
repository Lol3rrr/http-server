#include "../headerFiles/header.h"

int parseHeaders(char* headers, int headersLength, headers_t* result, int* headerEnd) {
  kvNode_t* lastHeader = &(result->kvNodes);

  int keyStart = 0;
  int keyEnd = 0;
  for (int i = 0; i < headersLength - 1; i++) {
    int is = (headers[i] == ':' && keyStart == keyEnd);
    keyEnd = is * i + (!is) * keyEnd;

    if (headers[i] == '\r' && headers[i+1] == '\n') {
      int keyLength = keyEnd - keyStart;
      int valueLength = i - keyEnd - 2;

      if (keyLength <= 0 || valueLength <= 0) {
        *headerEnd = i + 2;
        break;
      }

      string key = {
        .content = headers + keyStart,
        .length = keyLength,
        .needsFree = 0
      };
      string value = {
        .content = headers + (keyEnd + 2),
        .length = valueLength,
        .needsFree = 0
      };

      lastHeader = pushKVNode(lastHeader, &key, &value);

      keyStart = i + 2;
      keyEnd = keyStart;
    }
  }

  return 0;
}
