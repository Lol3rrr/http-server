#include "utest.h"

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/queryParams.h"

#ifndef QUERYPARAMS_TEST_H
#define QUERYPARAMS_TEST_H

UTEST(queryparams, parseQueryParams) {
  char* pathContent = "/test?param0=value0&param1=value1&param2=value2\0";
  string path = {
    .content = pathContent,
    .length = strlen(pathContent)
  };
  string outputPath;

  int pairs = 3;
  char** params = malloc(pairs * sizeof(char*));
  char** values = malloc(pairs * sizeof(char*));
  for (int i = 0; i < pairs; i++) {
    params[i] = malloc(7 * sizeof(char*));
    memcpy(params[i], "paramX\0", 7);
    params[i][5] = '0' + i;
    values[i] = malloc(7 * sizeof(char*));
    memcpy(values[i], "valueX\0", 7);
    values[i][5] = '0' + i;
  }

  queryParams_t resultParams = createEmptyQueryParams();
  parseQueryParams(path, &outputPath, &resultParams);

  char* resultPath = "/test";
  ASSERT_FALSE(memcmp(resultPath, outputPath.content, outputPath.length));

  for (int i = 0; i < pairs; i++) {
    if (i < QUERYPARAMS_BUFFER) {
      kvNode_t entry = resultParams.list.buffer[i];
      ASSERT_STREQ(params[i], entry.key.content, entry.key.length);
      ASSERT_STREQ(values[i], entry.value.content, entry.value.length);
    }
  }
}

#endif