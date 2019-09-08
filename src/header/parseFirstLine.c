#include "../header.h"

// Returns 0 if worked
int parseFirstLine(char* firstLine, char** methodPtr, char** pathPtr, char** protokolPtr) {
  clock_t startTime = clock();

  int start = 0;
  int partNumber = 0;
  for (int i = 0; 1; i++) {
    if (firstLine[i] == ' ' || firstLine[i] == '\0') {
      int end = i;
      int length = end - start;

      char* part = createEmptyCString(length);

      for(int j = 0; j < length; j++) {
        part[j] = firstLine[start + j];
      }

      if (partNumber == 0) {
        *methodPtr = part;
      }
      if (partNumber == 1) {
        *pathPtr = part;
      }
      if (partNumber == 2) {
        *protokolPtr = part;

        break;
      }

      start = i + 1;
      partNumber++;
    }
  }

  clock_t endTime = clock();
  if (isMeasuring()) {
    double time_spent = (double) (endTime - startTime) /  CLOCKS_PER_SEC;
    printf("[Measuring][parseFirstLine] Took %f Seconds \n", time_spent);
  }

  return 0;
}
