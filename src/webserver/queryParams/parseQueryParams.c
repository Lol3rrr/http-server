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

  int start = 0;
  int paramSeperator = findCharArrAfter(paramStr, "&", paramStrLength, 1, start);
  while (paramSeperator != -1) {
    int singleParamLength = paramSeperator - start;
    parseQueryParam(paramStr + start, singleParamLength, result);

    start = paramSeperator + 1;
    paramSeperator = findCharArrAfter(paramStr, "&", paramStrLength, 1, start + 1);
  }

  int singleParamLength = paramStrLength - start;
  parseQueryParam(paramStr + start, singleParamLength, result);

  return result;
}
