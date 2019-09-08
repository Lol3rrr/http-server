#include "../headerFiles/general.h"

char* createEmptyCString(int length) {
  char* result = (char*) malloc((length + 1) * sizeof(char));
  result[length] = '\0';

  return result;
}
