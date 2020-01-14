#include <stdio.h>

#include "header.h"

int main() {
  printf("Starting Benchmark \n");

  firstLineBench();
  parseHeadersBench();

  printf("Done \n");

  return 0;
}
