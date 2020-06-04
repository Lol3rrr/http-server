#include "../keyValueList.h"

double addKVBench(int pairs, string* keys, string* values) {
  // Start the actual Benchmark
  double total = 0.0;

  const int bufferSize = 25;

  for (int i = 0; i < RUNS; i++) {
    kvList_t test = createKVList(bufferSize);

    clock_t start = clock();

    for (int i = 0; i < pairs; i++) {
      pushKVList(test, keys[i], values[i]);
    }    

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    //cleanKVNodes(current.next);
  }

  return total;
}