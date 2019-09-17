#include "../headerFiles/queryParams.h"

int parseQueryParam(char* rawParam, queryParams_t* params) {
  int rawParamLength = getStringLength(rawParam);

  int seperator = findStr(rawParam, "=", rawParamLength, 1);
  if (seperator < 0) {
    return -1;
  }

  char* key;
  char* value;

  int keyLength = seperator;
  int valueLength = rawParamLength - (seperator + 1);

  getSubstring(rawParam, 0, keyLength, &key);
  getSubstring(rawParam, seperator + 1, valueLength, &value);

  if (params->kvNodes == NULL) {
    params->kvNodes = createKVNode(key, value, keyLength, valueLength);

    free(key);
    free(value);

    return 0;
  }

  pushKVNode(params->kvNodes, key, value, keyLength, valueLength);

  free(key);
  free(value);

  return 0;
}
