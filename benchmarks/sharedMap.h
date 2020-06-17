#ifndef SHARED_MAP_BENCH_H
#define SHARED_MAP_BENCH_H

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../src/webserver/headerFiles/sharedMap.h"

#include "general.h"

void BM_BucketIndex(benchmark::State& state) {
  int size = state.range(0);
  
  unsigned int seed = time(NULL);
  for (auto _ : state) {
    unsigned int hash = rand_r(&seed);

    bucketIndex(size, hash);
  }
}

void BM_CalculateHash(benchmark::State& state) {
  int size = state.range(0);
  char* line = (char*) malloc(size * sizeof(char));
  
  unsigned int seed = time(NULL);
  for (int i = 0; i < size; i++) {
    line[i] = rand_r(&seed);
  } 

  for (auto _ : state) {
    calcHash(line);
  }

  free(line);
}

#endif
