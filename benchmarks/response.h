#ifndef BENCH_RESPONSE_H
#define BENCH_RESPONSE_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include <benchmark/benchmark.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/response.h"
#include "../src/webserver/headerFiles/header.h"

#include "general.h"

void BM_CreateHTTPHeaderPart(benchmark::State& state) {
  int count = state.range(0);

  response tmpResp = createEmptyResponse();

  for (int i = 0; i < count; i++) {
    char key[17];
    char value[16];

    sprintf(key, "Header%d", i);
    sprintf(value, "Value%d", i);
    
    string keyStr = {
      .content = key,
      .length = strlen(key)
    };
    string valueStr = {
      .content = value,
      .length = strlen(value)
    };
    addHeader(&tmpResp, keyStr, valueStr);
  }

  int headerLength = tmpResp.headerResponseSize;
  char* result = (char*) malloc(headerLength * sizeof(char));

  for (auto _ : state) {
    createHTTPHeaderPart(&tmpResp, "\r\n", 2, result);
  }

  free(result);

  cleanResponse(&tmpResp);
}

#endif
