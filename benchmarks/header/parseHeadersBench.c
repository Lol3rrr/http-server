#include "../header.h"

void parseHeadersBench() {
  char* line = "Accept: text/html\r\nDomain: test\r\n\r\n";
  int lineLength = strlen(line);

  int end;
  headers_t* headers;


  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    clock_t start = clock();

    headers = parseHeaders(line, lineLength, &end);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    cleanHeader(headers);
  }

  printDuration("Header", "Parse Headers", total);
}
