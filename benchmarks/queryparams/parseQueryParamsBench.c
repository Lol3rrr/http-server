#include "../queryparams.h"

double parseQueryParamsBench(char* pathInput) {
  int pathLength = strlen(pathInput);

  string path = {
    content: pathInput,
    length: pathLength
  };

  string resultPath;

  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    clock_t start = clock();

    queryParams_t params = parseQueryParams(path, &resultPath);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    if (params.exists) {
      cleanQueryParams(params);
    }
  }

  return total;
}
