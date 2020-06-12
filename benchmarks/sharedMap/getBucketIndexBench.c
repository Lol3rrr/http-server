#include "../sharedMap.h"

void getBucketIndexBench() {
  int bucketCount = 64;
  unsigned hash = 1232131;

  long int total = 0;
  int t = 1;

  for (int i = 0; i < RUNS; i++) {
    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    bucketIndex(bucketCount, hash);

    long int duration = getDurationNanoSec(startTime);
    total += (duration - total) / t;
    ++t;
  }

  printRawDuration("Shared-Map", "Get BucketIndex", total);
}