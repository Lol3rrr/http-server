#include "../request.h"

void parseQueryParamsBench() {
  char* pathInput = "/testPage?key=value";
  int pathLength = strlen(pathInput);

  string* path = createString(pathInput, pathLength);

  char* resultPath;
  int resultLength;

  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    clock_t start = clock();

    queryParams_t* params = parseQueryParams(path, &resultPath, &resultLength);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    if (params != NULL) {
      //cleanQueryParams(params);
    }
  }

  printDuration("QueryParams", "Parse Query Params", total);
}
