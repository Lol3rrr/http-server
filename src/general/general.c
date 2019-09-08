#include "../general.h"

void setGeneralDebug(int value) {
  debug = value;
}
int isDebug() {
  return debug;
}

void setGeneralCaching(int value) {
  caching = value;
}
int isCachingEnabled() {
  return caching;
}

void setMeasureExec(int value) {
  measuring = value;
}
int isMeasuring() {
  return measuring;
}

int getLength(char* src) {
  int length = 0;
  while (src[length] != '\0') {
    length++;
  }
  return length;
}

char* createEmptyCString(int length) {
  char* result = (char*) malloc((length + 1) * sizeof(char));
  result[length] = '\0';

  return result;
}
