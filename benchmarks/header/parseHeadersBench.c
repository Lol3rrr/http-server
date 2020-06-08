#include "../header.h"

long int parseHeadersBench(char* input) {
  int inputLength = strlen(input);

  int end;

  // Start the actual Benchmark
  long int total = 0;
  int t = 1;

  for (int i = 0; i < RUNS; i++) {
    headers_t headers = createEmptyHeaders();

    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    parseHeaders(input, inputLength, &headers, &end);

    long int duration = getDurationNanoSec(startTime);
    total += (duration - total) / t;
    ++t;

    cleanHeader(&headers);
  }

  return total;
}
