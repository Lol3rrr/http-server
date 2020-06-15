#include "../headerFiles/stats.h"

int counterToString(counter_t* counter, char** result) {
  int valueLength = 12;

  // the 1 is for the space between the two parts
  // the 1 is for the endline
  int totalLength = counter->name.length + 1 + valueLength + 1;

  char* tmp = (char*) malloc((totalLength + 1) * sizeof(char));
  tmp[totalLength] = '\0';

  char tmpValue[12];
  int counterLength = citoa(counter->count, tmpValue);


  int offset = 0;
  memcpy(tmp, counter->name.content, counter->name.length);
  offset += counter->name.length;

  tmp[offset] = ' ';
  offset++;

  // 12 is the length of the char array that holds the String Version of the Value
  int numbersWritten = 0;
  for (int i = 0; i < counterLength; i++) {
    tmp[offset] = tmpValue[i];
    if (tmp[offset] == '\0') {
      break;
    }
    numbersWritten++;
    offset++;
  }
  for (int i = numbersWritten; i < 12; i++) {
    tmp[offset] = ' ';
    offset++;
  }

  tmp[offset] = '\n';
  offset++;

  (*result) = tmp;

  return totalLength;
}
