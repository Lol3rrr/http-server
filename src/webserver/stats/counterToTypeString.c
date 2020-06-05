#include "../headerFiles/stats.h"

int counterToTypeString(counter_t* counter, char** result) {
  // the 5 is for the '#TYPE' at the beginning
  // the 1 is for the space
  // the 1 is for the space
  // the 7 is for the 'counter'
  // the 1 is for the endline
  int totalLength = 5 + 1 + counter->name.length + 1 + 7 + 1;

  char* tmp = (char*) malloc((totalLength + 1) * sizeof(char));
  tmp[totalLength] = '\0';

  tmp[0] = '#';
  tmp[1] = 'T';
  tmp[2] = 'Y';
  tmp[3] = 'P';
  tmp[4] = 'E';
  tmp[5] = ' ';

  int offset = 6;
  memcpy(tmp + 6, counter->name.content, counter->name.length);
  offset += counter->name.length;

  tmp[offset] = ' ';
  offset++;
  tmp[offset] = 'c';
  offset++;
  tmp[offset] = 'o';
  offset++;
  tmp[offset] = 'u';
  offset++;
  tmp[offset] = 'n';
  offset++;
  tmp[offset] = 't';
  offset++;
  tmp[offset] = 'e';
  offset++;
  tmp[offset] = 'r';
  offset++;
  tmp[offset] = '\n';
  offset++;

  (*result) = tmp;

  return totalLength;
}
