#include "../header.h"

long int parseHeadersBench(char* input) {
  int inputLength = strlen(input);

  int end;

  // Start the actual Benchmark
  long int total = 0;

  for (int i = 0; i < RUNS; i++) {
    headers_t headers = createEmptyHeaders();

    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    parseHeaders(input, inputLength, &headers, &end);

    total += getDurationNanoSec(startTime);

    cleanHeader(&headers);
  }

  return total;
}
