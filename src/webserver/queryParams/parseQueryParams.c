#include "../headerFiles/queryParams.h"

queryParams_t* parseQueryParams(char* rawPath, char** resultPath) {
  queryParams_t* result = (queryParams_t*) malloc(1 * sizeof(queryParams_t));

  int rawLength = getStringLength(rawPath);

  int paramStart = findStr(rawPath, "?", -1, 1);
  if (paramStart < 0) {
    printf("No Params found \n");

    return NULL;
  }
  getSubstring(rawPath, 0, paramStart, resultPath);

  int paramStrLength = (rawLength - paramStart - 1);
  char* paramStr;
  getSubstring(rawPath, paramStart + 1, paramStrLength, &paramStr);

  int start = 0;
  int paramSeperator = findStrAfter(paramStr, "&", paramStrLength, 1, start);
  while (paramSeperator != -1) {
    char* singleParam;
    getSubstring(paramStr, start, paramSeperator - start, &singleParam);

    printf("Param: '%s' \n", singleParam);
    free(singleParam);

    start = paramSeperator + 1;
    paramSeperator = findStrAfter(paramStr, "&", paramStrLength, 1, start + 1);
  }

  char* singleParam;
  getSubstring(paramStr, start, paramStrLength - start, &singleParam);
  printf("Param: '%s' \n", singleParam);


  free(paramStr);

  printf("RawPath: '%s' \n", rawPath);
  printf("Param String: '%s' \n", paramStr);

  return result;
}
