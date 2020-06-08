#include "../queryparams.h"

long int parseQueryParamsBench(char* pathInput) {
  int pathLength = strlen(pathInput);

  string path = {
    content: pathInput,
    length: pathLength
  };

  string resultPath;

  // Start the actual Benchmark
  long int total = 0;

  for (int i = 0; i < RUNS; i++) {
    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    queryParams_t params = parseQueryParams(path, &resultPath);

    total = total + getDurationNanoSec(startTime);

    if (params.exists) {
      cleanQueryParams(params);
    }
  }

  return total;
}
