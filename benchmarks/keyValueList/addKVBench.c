#include "../keyValueList.h"

long int addKVBench(int pairs, string* keys, string* values) {
  // Start the actual Benchmark
  long int total = 0;

  const int bufferSize = 25;

  for (int i = 0; i < RUNS; i++) {
    kvList_t test = createKVList(bufferSize);

    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    for (int i = 0; i < pairs; i++) {
      pushKVList(&test, keys[i], values[i]);
    }    

    total = total + getDurationNanoSec(startTime);

    cleanKVList(test);
  }

  return total;
}