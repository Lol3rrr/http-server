#ifndef BENCH_KV_H
#define BENCH_KV_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include <benchmark/benchmark.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/keyValueList.h"

#include "general.h"

clock_t addKVBench(int pairs, string* keys, string* values);
void addXKVsBench(int count);

void benchAddKV();

void BM_AddKV(benchmark::State& state) {
  int size = state.range(0);
  int count = state.range(1);

  string tmpKey = {
    .content = "testKey",
    .length = 7
  };
  string tmpValue = {
    .content = "testValue",
    .length = 9
  };
  
  for (auto _ : state) {
    state.PauseTiming();
    kvList_t tmpList = createKVList(size);
    state.ResumeTiming();

    for (int i = 0; i < count; i++) {
      pushKVList(&tmpList, tmpKey, tmpValue);
    }
    
    state.PauseTiming();
    cleanKVList(tmpList);
    state.ResumeTiming();
  }
}

#endif
