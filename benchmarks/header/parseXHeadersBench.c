#include "../header.h"

void parseXHeadersBench(int count) {
  int length = 16 * count + 2 + 1;
  char* buffer = malloc(length * sizeof(char));
  char* currentBuffer = buffer;
  for (int i = 0; i < count; i++) {
    int writeLength = sprintf(currentBuffer, "%06d: %06d\r\n", i, rand() % 1000000);
    currentBuffer += writeLength;
  }
  buffer[length - 3] = '\r';
  buffer[length - 2] = '\n';
  buffer[length - 1] = '\0';

  long int total = parseHeadersBench(buffer);

  char nameBuffer[21];
  sprintf(nameBuffer, "Parse %06d-Headers", count);
  nameBuffer[20] = '\0';
  printDuration("Header", nameBuffer, total);

  free(buffer);
}
