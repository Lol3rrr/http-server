#include "../header.h"

double parseHeadersBench(char* input) {
  int inputLength = strlen(input);

  int end;
  headers_t* headers;


  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    clock_t start = clock();

    headers = parseHeaders(input, inputLength, &end);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    cleanHeader(headers);
  }

  return total;
}
