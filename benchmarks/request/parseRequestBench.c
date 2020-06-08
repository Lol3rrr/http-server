#include "../request.h"

void parseRequestBench() {
  char* lineInput = "GET / HTTP/1.1\r\nAccept: text/html\r\nDomain: test\r\n\r\n";
  int lineLength = strlen(lineInput);

  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    request* tmp = createEmptyRequest();

    char* line = malloc(lineLength * sizeof(char));
    memcpy(line, lineInput, lineLength);

    clock_t start = clock();

    parseRequest(line, lineLength, tmp);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    cleanRequest(tmp);
    free(tmp);
  }

  printDuration("Request", "Parse Request", total);
}
