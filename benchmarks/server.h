#ifndef BENCH_SERVER_H
#define BENCH_SERVER_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/server.h"

#include "general.h"

void BM_DeterminContentType(benchmark::State& state) {
  int typeCount = 6;
  char** types = (char**) malloc(typeCount * sizeof(char*));
  for (int i = 0; i < typeCount; i++) {
    types[i] = (char*) malloc(9 * sizeof(char));
  }
  memcpy(types[0], "-----test", 9);
  memcpy(types[1], "test.html", 9);
  memcpy(types[2], "--test.js", 9);
  memcpy(types[3], "-test.css", 9);
  memcpy(types[4], "-test.png", 9);
  memcpy(types[5], "-test.bin", 9);

  srand(time(NULL));


  string typeResult;
  int typeIDResult;

  for (auto _ : state) {
    state.PauseTiming();
    int index = rand_r() % typeCount;
    string path = {
      .content = types[index],
      .length = 9,
      .needsFree = 0
    };
    state.ResumeTiming();

    determinContentType(path, &typeResult, &typeIDResult);

    state.PauseTiming();
    cleanString(typeResult);
    state.ResumeTiming();
  }
}

#endif
