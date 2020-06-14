#ifndef BENCH_QUERYPARAMS_H
#define BENCH_QUERYPARAMS_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include <benchmark/benchmark.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/queryParams.h"

#include "general.h"

void BM_ParseQueryParams(benchmark::State& state) {
  int count = state.range(0);
  int length = 9 + count * 14; 
  char* buffer = (char*) malloc(length * sizeof(char));

  memcpy(buffer, "/testpage", 9);
  char* currentBuffer = buffer + 9;
  for (int i = 0; i < count; i++) {
    if (i == 0) {
      currentBuffer[0] = '?';
    } else {
      currentBuffer[0] = '&';
    }
    currentBuffer++;

    int writeLength = sprintf(currentBuffer, "%06d=%06d", i, rand() % 1000000);
    currentBuffer += writeLength;
  }

  string path = {
    content: buffer,
    length: length
  };

  string resultPath;

  for (auto _ : state) {
    queryParams_t params = parseQueryParams(path, &resultPath);

    state.PauseTiming();
    if (params.exists) {
      cleanQueryParams(params);
    }
    state.ResumeTiming();
  }

  free(buffer);
}

#endif
