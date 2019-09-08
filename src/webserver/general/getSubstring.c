#include "../headerFiles/general.h"

int getSubstring(char* src, int start, int length, char** result) {
  char* substr = createEmptyCString(length);

  for (int i = 0; i < length; i++) {
    substr[i] = src[i + start];
  }

  (*result) = substr;

  return 0;
}
