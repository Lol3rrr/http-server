#include "../headerFiles/queryParams.h"

queryParams_t* parseQueryParams(string* rawPath, char** resultPath) {
  int paramStart = findStr(rawPath->content, "?", rawPath->length, 1);
  if (paramStart < 0) {
    return NULL;
  }
  string* resultString = getSubstring(rawPath->content, 0, paramStart);
  *resultPath = resultString->content;
  free(resultString);

  int paramStrLength = (rawPath->length - paramStart - 1);
  string* paramStr = getSubstring(rawPath->content, paramStart + 1, paramStrLength);


  queryParams_t* result = (queryParams_t*) malloc(1 * sizeof(queryParams_t));
  result->kvNodes = NULL;

  int start = 0;
  int paramSeperator = findStrAfter(paramStr->content, "&", paramStrLength, 1, start);
  while (paramSeperator != -1) {
    string* singleParam = getSubstring(paramStr->content, start, paramSeperator - start);

    parseQueryParam(singleParam->content, result);
    free(singleParam->content);
    free(singleParam);

    start = paramSeperator + 1;
    paramSeperator = findStrAfter(paramStr->content, "&", paramStrLength, 1, start + 1);
  }

  string* singleParam = getSubstring(paramStr->content, start, paramStrLength - start);
  parseQueryParam(singleParam->content, result);
  free(singleParam->content);
  free(singleParam);

  free(paramStr->content);
  free(paramStr);

  return result;
}
