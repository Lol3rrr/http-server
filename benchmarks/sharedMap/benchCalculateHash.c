#include "../sharedMap.h"

long int benchCalculateHash(char* str) {
  // Start the actual Benchmark
  long int total = 0;
  int t = 1;

  for (int i = 0; i < RUNS; i++) {
    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    calcHash(str);

    long int duration = getDurationNanoSec(startTime);
    total += (duration - total) / t;
    ++t;
  }

  return total;
}