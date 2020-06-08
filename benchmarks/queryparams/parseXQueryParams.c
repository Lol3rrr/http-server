#include "../queryparams.h"

void parseXQueryParamsBench(int count) {
  int length = 9 + count * 14 + 1; 
  char* buffer = malloc(length * sizeof(char));

  memcpy(buffer, "/testpage", 9);
  char* currentBuffer = buffer + 9;
  for (int i = 0; i < count; i++) {
    if (i == 0) {
      currentBuffer[0] = '?';
    } else {
      currentBuffer[0] = '&';
    }
    currentBuffer++;

    int writeLength = sprintf(currentBuffer, "%06d=%06d", i, rand() % 1000000);
    currentBuffer += writeLength;
  }
  buffer[length - 1] = '\0';

  long int total = parseQueryParamsBench(buffer);

  char nameBuffer[24];
  sprintf(nameBuffer, "Parse %06d-Parameters", count);
  nameBuffer[23] = '\0';
  printDuration("QueryParams", nameBuffer, total);

  free(buffer);
}