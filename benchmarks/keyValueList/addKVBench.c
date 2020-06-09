#include "../keyValueList.h"

long int addKVBench(int pairs, string* keys, string* values) {
  // Start the actual Benchmark
  long int total = 0;
  int t = 1;

  const int bufferSize = 25;

  for (int i = 0; i < RUNS; i++) {
    kvList_t test = createKVList(bufferSize);

    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    for (int i = 0; i < pairs; i++) {
      pushKVList(&test, keys[i], values[i]);
    }    

    long int duration = getDurationNanoSec(startTime);
    total += (duration - total) / t;
    ++t;

    cleanKVList(test);
  }

  return total;
}