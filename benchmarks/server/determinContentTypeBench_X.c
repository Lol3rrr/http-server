#include "../server.h"

long int benchDeterminContentType(string path) {
  long int total = 0;

  for (int i = 0; i < RUNS; i++) {
    // Setup stuff for each run
    string result;
    int id;

    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    // Do the stuff itself
    determinContentType(path, &result, &id);

    total = total + getDurationNanoSec(startTime);

    cleanString(result);
  }

  return total;
}


void determinContentTypeBench_NoExtension() {
  string tmpPath = {
    .content = "/index",
    .length = 6
  };

  long int total = benchDeterminContentType(tmpPath);
  printDuration("Server", "DeterminContentType - No Extension", total);
}
void determinContentTypeBench_HTML() {
  string tmpPath = {
    .content = "/index.html",
    .length = 11
  };

  long int total = benchDeterminContentType(tmpPath);
  printDuration("Server", "DeterminContentType - HTML", total);
}
void determinContentTypeBench_JS() {
  string tmpPath = {
    .content = "/index.js",
    .length = 9
  };

  long int total = benchDeterminContentType(tmpPath);
  printDuration("Server", "DeterminContentType - JS", total);
}
void determinContentTypeBench_CSS() {
  string tmpPath = {
    .content = "/index.css",
    .length = 10
  };

  long int total = benchDeterminContentType(tmpPath);
  printDuration("Server", "DeterminContentType - CSS", total);
}
void determinContentTypeBench_IMAGE() {
  string tmpPath = {
    .content = "/index.png",
    .length = 10
  };

  long int total = benchDeterminContentType(tmpPath);
  printDuration("Server", "DeterminContentType - IMAGE", total);
}
void determinContentTypeBench_OTHER() {
  string tmpPath = {
    .content = "/index.bin",
    .length = 10
  };

  long int total = benchDeterminContentType(tmpPath);
  printDuration("Server", "DeterminContentType - OTHER", total);
}