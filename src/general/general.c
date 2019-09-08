#include "../general.h"

void setDebugMode(int value) {
  debug = value;
}
int isDebugEnabled() {
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
int isMeasuringEnabled() {
  return measuring;
}
