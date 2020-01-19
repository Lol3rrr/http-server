#include "../request.h"

void parseHeadBench() {
  char* lineInput = "GET / HTTP/1.1\r\nAccept: text/html\r\nDomain: test\r\n\r\n";
  int lineLength = strlen(lineInput);

  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    request tmp;

    clock_t start = clock();

    parseHead(lineInput, lineLength, &tmp);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    cleanRequest(&tmp);
  }

  printDuration("Request", "Parse Head", total);
}
