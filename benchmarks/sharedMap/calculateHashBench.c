#include "../sharedMap.h"

static void calculateHashBenchXLength(int length) {
  char* str = malloc((length + 1) * sizeof(char));
  str[length] = '\0';

  for (int i = 0; i < length; i++) {
    str[i] = (i % 25) + 97;
  }

  long int total = benchCalculateHash(str);

  char nameBuffer[30];
  sprintf(nameBuffer, "Calculate Hash Length: %06d", length);
  nameBuffer[29] = '\0';
  printRawDuration("Shared-Map", nameBuffer, total);

  free(str);
}

void calculateHashBench() {
  calculateHashBenchXLength(5);
  calculateHashBenchXLength(10);
  calculateHashBenchXLength(25);
  calculateHashBenchXLength(50);
}