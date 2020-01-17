#include <stdio.h>

#include "header.h"
#include "request.h"
#include "queryparams.h"

int main() {
  printf("Starting Benchmark \n");

  // Header Benchmarks
  firstLineBench();
  benchParseHeader();

  // Request Benchmarks
  parseHeadBench();
  parseRequestBench();

  // Queryparams Benchmarks
  benchParseQueryParams();

  printf("Done \n");

  return 0;
}
