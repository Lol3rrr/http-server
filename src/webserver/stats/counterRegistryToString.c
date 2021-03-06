#include "../headerFiles/stats.h"

int counterRegistryToString(counter_t** registry, char** result) {
  int totalLength = 0;
  counter_t* lengthCurrent = (*registry);
  while (lengthCurrent != NULL) {
    int tmpLength = counterToStringLength(lengthCurrent);
    int tmpTypeLength = counterToTypeStringLength(lengthCurrent);

    totalLength += tmpLength;
    totalLength += tmpTypeLength;

    lengthCurrent = lengthCurrent->next;
  }


  char* res = (char*) malloc((totalLength + 1) * sizeof(char));
  res[totalLength] = '\0';

  int offset = 0;
  counter_t* current = (*registry);
  while (current != NULL) {
    char* tmpType;
    int typeLength = counterToTypeString(current, &tmpType);
    for (int i = 0; i < typeLength; i++) {
      res[offset] = tmpType[i];
      offset++;
    }
    free(tmpType);

    char* tmpStr;
    int length = counterToString(current, &tmpStr);
    for (int i = 0; i < length; i++) {
      res[offset] = tmpStr[i];
      offset++;
    }
    free(tmpStr);

    current = current->next;
  }

  (*result) = res;

  return totalLength;
}
