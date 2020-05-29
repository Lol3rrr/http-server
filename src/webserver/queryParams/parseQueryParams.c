#include "../headerFiles/queryParams.h"

queryParams_t* parseQueryParams(string* rawPath, char** resultPath, int* resultLength) {
  int paramStart = findStr(rawPath, "?", 1);
  if (paramStart < 0) {
    return NULL;
  }

  *resultPath = rawPath->content + 0;
  *resultLength = paramStart;

  int paramStrLength = (rawPath->length - paramStart - 1);
  char* paramStr = rawPath->content + paramStart + 1;


  queryParams_t* result = (queryParams_t*) malloc(1 * sizeof(queryParams_t));
  result->kvNodes = NULL;
  kvNode_t* lastNode = result->kvNodes;

  int keyStart = 0;
  int keyEnd = 0;
  for (int i = 0; i < paramStrLength; i++) {
    if (paramStr[i] == '=') {
      keyEnd = i;
    }

    if (paramStr[i] == '&' || i == paramStrLength - 1) {
      int valueStart = keyEnd + 1;
      int keyLength = keyEnd - keyStart;
      int valueLength = i - valueStart;

      if (keyLength <= 0 || valueLength <= 0) {
        continue;
      }

      string key = {
        .content = paramStr + keyStart,
        .length = keyLength,
        .needsFree = 0
      };
      string value = {
        .content = paramStr + valueStart,
        .length = valueLength,
        .needsFree = 0
      };

      if (lastNode == NULL) {
        result->kvNodes = createKVNode(&key, &value);
        lastNode = result->kvNodes;
      } else {
        lastNode = pushKVNode(lastNode, &key, &value);
      }


      keyStart = i + 1;
      keyEnd = keyStart;
    }
  }

  return result;
}
