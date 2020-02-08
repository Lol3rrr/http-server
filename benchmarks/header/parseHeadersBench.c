#include "../header.h"

double parseHeadersBench(char* input) {
  int inputLength = strlen(input);

  int end;

  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    headers_t headers = {
      kvNodes: NULL
    };

    clock_t start = clock();

    parseHeaders(input, inputLength, &headers, &end);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    cleanHeader(&headers);
  }

  return total;
}
