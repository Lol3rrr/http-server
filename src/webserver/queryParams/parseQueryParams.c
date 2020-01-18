#include "../headerFiles/queryParams.h"

queryParams_t* parseQueryParams(string* rawPath, char** resultPath, int* resultLength) {
  int paramStart = findStr(rawPath, "?", 1);
  if (paramStart < 0) {
    return NULL;
  }
  string* resultString = getSubstring(rawPath->content, 0, paramStart);
  *resultPath = resultString->content;
  *resultLength = paramStart;
  free(resultString);

  int paramStrLength = (rawPath->length - paramStart - 1);
  char* paramStr = rawPath->content + paramStart + 1;


  queryParams_t* result = (queryParams_t*) malloc(1 * sizeof(queryParams_t));
  result->kvNodes = NULL;

  int keyStart = 0;
  int keyEnd = 0;
  for (int i = 0; i < paramStrLength; i++) {
    if (paramStr[i] == '=') {
      keyEnd = i;
    }

    if (paramStr[i] == '&' || i == paramStrLength - 1) {
      if (keyEnd == keyStart) {
        continue;
      }

      int valueStart = keyEnd + 1;

      int keyLength = keyEnd - keyStart;
      int valueLength = i - valueStart;

      string* key = createEmptyString(keyLength);
      string* value = createEmptyString(valueLength);

      memcpy(key->content, paramStr + keyStart, keyLength);
      memcpy(value->content, paramStr + valueStart, valueLength);

      if (result->kvNodes == NULL) {
        result->kvNodes = createKVNode(key, value);
      } else {
        pushKVNode(result->kvNodes, key, value);
      }


      keyStart = i + 1;
      keyEnd = keyStart;
    }
  }

  return result;
}
