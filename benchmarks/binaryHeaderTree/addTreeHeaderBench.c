#include "../binaryHeaderTree.h"

double addTreeHeaderBench(int pairs, string* keys, string* values) {
  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    BTreeNode_t* current = NULL;

    clock_t start = clock();

    for (int i = 0; i < pairs; i++) {
      insert(&current, keys[i], values[i]);
    }    

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;
  }

  return total;
}