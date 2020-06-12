#include "../headerFiles/queryParams.h"

queryParams_t parseQueryParams(string rawPath, string* resultPath) {
  queryParams_t result = {
    .exists = 0,
  };

  int paramStart = findStr(rawPath, "?", 1);
  if (paramStart < 0) {
    return result;
  }

  resultPath->content = rawPath.content;
  resultPath->length = paramStart;
  resultPath->needsFree = 0;

  int paramStrLength = (rawPath.length - paramStart - 1);
  char* paramStr = rawPath.content + paramStart + 1;

  result.exists = 1;
  result.list = createKVList(QUERYPARAMS_BUFFER);

  int keyStart = 0;
  int keyEnd = 0;
  for (int i = 0; i < paramStrLength; i++) {
    if (paramStr[i] == '=') {
      keyEnd = i;
    } else if (paramStr[i] == '&' || i == paramStrLength - 1) {
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

      pushKVList(&(result.list), key, value);

      keyStart = i + 1;
      keyEnd = keyStart;
    }
  }

  return result;
}
