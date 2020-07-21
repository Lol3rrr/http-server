#ifndef BENCH_HEADER_H
#define BENCH_HEADER_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include <benchmark/benchmark.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/header.h"

#include "general.h"

void BM_ParseFirstLine(benchmark::State& state) {
  char* lineInput = "GET / HTTP/1.1\r\n";
  int lineLength = strlen(lineInput);

  string method;
  string path;
  string protokol;

  for (auto _ : state) {
    parseFirstLine(lineInput, lineLength, &method, &path, &protokol);
  }
}

void BM_ParseHeaders(benchmark::State& state) {
  int count = state.range(0);
  int length = 12 * count + 2;
  char* buffer = (char*) malloc(length * sizeof(char));
  char* currentBuffer = buffer;
  for (int i = 0; i < count; i++) {
    int writeLength = sprintf(currentBuffer, "%04d: %04d\r\n", i, rand() % 1000);
    currentBuffer += writeLength;
  }
  buffer[length - 2] = '\r';
  buffer[length - 1] = '\n';

  headers_t headers = createEmptyHeaders();

  for (auto _ : state) {
    int end = parseHeaders(buffer, length, &headers);

    resetHeader(&headers);
  }
}

#endif
