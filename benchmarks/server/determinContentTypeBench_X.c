#include "../server.h"

double benchDeterminContentType(string path) {
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    // Setup stuff for each run
    string result;
    int id;

    clock_t start = clock();

    // Do the stuff itself
    determinContentType(path, &result, &id);


    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    cleanString(result);
  }

  return total;
}


void determinContentTypeBench_NoExtension() {
  string tmpPath = {
    .content = "/index",
    .length = 6
  };

  double total = benchDeterminContentType(tmpPath);

  printDuration("Server", "DeterminContentType - No Extension", total);
}
void determinContentTypeBench_HTML() {
  string tmpPath = {
    .content = "/index.html",
    .length = 11
  };

  double total = benchDeterminContentType(tmpPath);

  printDuration("Server", "DeterminContentType - HTML", total);
}
void determinContentTypeBench_JS() {
  string tmpPath = {
    .content = "/index.js",
    .length = 9
  };

  double total = benchDeterminContentType(tmpPath);

  printDuration("Server", "DeterminContentType - JS", total);
}
void determinContentTypeBench_CSS() {
  string tmpPath = {
    .content = "/index.css",
    .length = 10
  };

  double total = benchDeterminContentType(tmpPath);

  printDuration("Server", "DeterminContentType - CSS", total);
}
void determinContentTypeBench_IMAGE() {
  string tmpPath = {
    .content = "/index.png",
    .length = 10
  };

  double total = benchDeterminContentType(tmpPath);

  printDuration("Server", "DeterminContentType - IMAGE", total);
}
void determinContentTypeBench_OTHER() {
  string tmpPath = {
    .content = "/index.bin",
    .length = 10
  };

  double total = benchDeterminContentType(tmpPath);

  printDuration("Server", "DeterminContentType - OTHER", total);
}