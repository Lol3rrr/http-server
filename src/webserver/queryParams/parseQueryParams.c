#include "../headerFiles/queryParams.h"

queryParams_t* parseQueryParams(char* rawPath, char** resultPath) {
  int rawLength = getStringLength(rawPath);

  int paramStart = findStr(rawPath, "?", -1, 1);
  if (paramStart < 0) {
    return NULL;
  }
  getSubstring(rawPath, 0, paramStart, resultPath);

  int paramStrLength = (rawLength - paramStart - 1);
  char* paramStr;
  getSubstring(rawPath, paramStart + 1, paramStrLength, &paramStr);


  queryParams_t* result = (queryParams_t*) malloc(1 * sizeof(queryParams_t));
  result->kvNodes = NULL;

  char* singleParam;
  int start = 0;
  int paramSeperator = findStrAfter(paramStr, "&", paramStrLength, 1, start);
  while (paramSeperator != -1) {
    getSubstring(paramStr, start, paramSeperator - start, &singleParam);

    parseQueryParam(singleParam, result);
    free(singleParam);

    start = paramSeperator + 1;
    paramSeperator = findStrAfter(paramStr, "&", paramStrLength, 1, start + 1);
  }

  getSubstring(paramStr, start, paramStrLength - start, &singleParam);
  parseQueryParam(singleParam, result);
  free(singleParam);

  free(paramStr);

  return result;
}
