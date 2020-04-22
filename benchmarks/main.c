#include <stdio.h>

#include "header.h"
#include "request.h"
#include "queryparams.h"
#include "response.h"

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

  // Response Benchmarks
  createHTTPHeaderPartBench();

  printf("Done \n");

  return 0;
}
