#include "../headerFiles/general.h"

void getSubstring(char* src, int start, int length, char** result) {
  char* substr = createEmptyCString(length);
  memcpy(substr, src + start, length);

  *result = substr;
}
