#include "../response.h"

double benchCreateHTTPHeaderPart(response* respPtr) {
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    // Setup stuff for each run
    int headerLength = getHTTPHeaderPartLength(respPtr, 2);
    char* result = malloc(headerLength * sizeof(char));

    clock_t start = clock();

    // Do the stuff itself
    createHTTPHeaderPart(respPtr, "\r\n", 2, result);


    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    free(result);
  }

  return total;
}