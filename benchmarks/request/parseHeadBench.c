#include "../request.h"

void parseHeadBench() {
  char* lineInput = "GET / HTTP/1.1\r\nAccept: text/html\r\nDomain: test\r\n\r\n";
  int lineLength = strlen(lineInput);

  request tmp;

  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    clock_t start = clock();

    parseHead(lineInput, lineLength, &tmp);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    free(tmp.method.content);
    free(tmp.path.content);
    free(tmp.protokol.content);
    cleanHeader(tmp.headers);
  }

  printDuration("Request", "Parse Head", total);
}
