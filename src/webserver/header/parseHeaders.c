#include "../headerFiles/header.h"

headers_t* parseHeaders(char* headers, int headersLength, int* headerEnd) {
  headers_t* result = createEmptyHeaders();

  kvNode_t* lastHeader = NULL;

  int keyStart = 0;
  int keyEnd = 0;
  for (int i = 0; i < headersLength - 1; i++) {
    if (headers[i] == ':' && keyStart == keyEnd) {
      keyEnd = i;
      continue;
    }

    if (headers[i] == '\r' && headers[i+1] == '\n') {
      int keyLength = keyEnd - keyStart;
      int valueLength = i - keyEnd - 2;

      if (keyLength == 0 || valueLength == 0) {
        *headerEnd = i + 2;
        break;
      }

      string key = {
        content: NULL,
        length: keyLength
      };
      string value = {
        content: NULL,
        length: valueLength
      };
      getSubstring(headers, keyStart, keyLength, &(key.content));
      getSubstring(headers, keyEnd + 2, valueLength, &(value.content));

      if (lastHeader == NULL) {
        lastHeader = pushHeader(result, &key, &value);
      }else {
        lastHeader = pushKVNode(lastHeader, &key, &value);
      }

      keyStart = i + 2;
      keyEnd = keyStart;
    }
  }

  return result;
}
