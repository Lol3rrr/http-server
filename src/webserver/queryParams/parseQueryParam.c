#include "../headerFiles/queryParams.h"

int parseQueryParam(char* rawParam, int rawParamLength, queryParams_t* params) {
  int seperator = findCharArr(rawParam, "=", rawParamLength, 1);
  if (seperator < 0) {
    return -1;
  }

  int keyLength = seperator;
  int valueLength = rawParamLength - (seperator + 1);

  string* key = createEmptyString(keyLength);
  string* value = createEmptyString(valueLength);

  memcpy(key->content, rawParam, keyLength);
  memcpy(value->content, rawParam + seperator + 1, valueLength);

  if (params->kvNodes == NULL) {
    params->kvNodes = createKVNode(key, value);

    return 0;
  }

  pushKVNode(params->kvNodes, key, value);

  return 0;
}
