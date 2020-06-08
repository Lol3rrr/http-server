#include "../response.h"

long int benchCreateHTTPHeaderPart(response* respPtr) {
  long int total = 0;

  for (int i = 0; i < RUNS; i++) {
    // Setup stuff for each run
    int headerLength = getHTTPHeaderPartLength(respPtr, 2);
    char* result = malloc(headerLength * sizeof(char));

    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    // Do the stuff itself
    createHTTPHeaderPart(respPtr, "\r\n", 2, result);

    total = total + getDurationNanoSec(startTime);

    free(result);
  }

  return total;
}