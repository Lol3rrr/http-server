#include "../headerFiles/queryParams.h"

queryParams_t* parseQueryParams(string* rawPath, char** resultPath) {
  int paramStart = findStr(rawPath->content, "?", rawPath->length, 1);
  if (paramStart < 0) {
    return NULL;
  }
  getSubstring(rawPath->content, 0, paramStart, resultPath);

  int paramStrLength = (rawPath->length - paramStart - 1);
  char* paramStr;
  getSubstring(rawPath->content, paramStart + 1, paramStrLength, &paramStr);


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
