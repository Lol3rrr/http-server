#include "../keyValueList.h"

double addKVBench(int pairs, string* keys, string* values) {
  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    kvNode_t current = {
      .next = NULL
    };

    clock_t start = clock();

    for (int i = 0; i < pairs; i++) {
      pushKVNode(&current, &(keys[i]), &(values[i]));
    }    

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    //cleanKVNodes(current.next);
  }

  return total;
}