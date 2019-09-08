#include "../header.h"

int createHeaderPair(headerNode_t* headerPtr, char** result) {
  clock_t startTime = clock();

  int keyLength = getStringLength(headerPtr->key);
  int valueLength = getStringLength(headerPtr->value);

  int totalLength = keyLength + 2 + valueLength;

  (*result) = createEmptyCString(totalLength);

  int index = 0;
  for(int i = 0; i < keyLength; i++) {
    (*result)[index] = headerPtr->key[i];
    index++;
  }
  (*result)[index] = ':';
  index++;
  (*result)[index] = ' ';
  index++;
  for(int i = 0; i < valueLength; i++) {
    (*result)[index] = headerPtr->value[i];
    index++;
  }

  clock_t endTime = clock();
  if (isMeasuringEnabled()) {
    double time_spent = (double) (endTime - startTime) / CLOCKS_PER_SEC;
    printf("[Measuring][createHeaderPair] Took %f Seconds \n", time_spent);
  }

  return totalLength;
}
