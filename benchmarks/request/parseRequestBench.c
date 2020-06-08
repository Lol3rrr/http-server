#include "../request.h"

void parseRequestBench() {
  char* lineInput = "GET / HTTP/1.1\r\nAccept: text/html\r\nDomain: test\r\n\r\n";
  int lineLength = strlen(lineInput);

  // Start the actual Benchmark
  long int total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    request tmp = createEmptyRequest();

    char* line = malloc(lineLength * sizeof(char));
    memcpy(line, lineInput, lineLength);

    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    parseRequest(line, lineLength, &tmp);

    total = total + getDurationNanoSec(startTime);

    cleanRequest(&tmp);
  }

  printDuration("Request", "Parse Request", total);
}
