#include "../headerFiles/queryParams.h"

int parseQueryParam(char* rawParam, queryParams_t* params) {
  int rawParamLength = getStringLength(rawParam);

  int seperator = findCharArr(rawParam, "=", rawParamLength, 1);
  if (seperator < 0) {
    return -1;
  }

  int keyLength = seperator;
  int valueLength = rawParamLength - (seperator + 1);

  string* key = getSubstring(rawParam, 0, keyLength);
  string* value = getSubstring(rawParam, seperator + 1, valueLength);

  if (params->kvNodes == NULL) {
    params->kvNodes = createKVNode(key, value);

    free(key);
    free(value);

    return 0;
  }

  pushKVNode(params->kvNodes, key, value);

  free(key);
  free(value);

  return 0;
}
