#include "../headerFiles/general.h"

int getStringLength(char* src) {
  int length = 0;
  while (src[length] != '\0') {
    length++;
  }
  return length;
}
