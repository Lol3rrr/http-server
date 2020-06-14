#include "../headerFiles/general.h"

char const digit[] = "0123456789";
int debug = 0;
int caching = 0;
int measuring = 0;
int templating = 0;
int internalCache = 0;

void setDebugMode(int value) {
  debug = value;
}
int isDebugEnabled() {
  return debug;
}

void setMeasureExec(int value) {
  measuring = value;
}
int isMeasuringEnabled() {
  return measuring;
}

void setGeneralCaching(int value) {
  caching = value;
}
int isCachingEnabled() {
  return caching;
}

void setGeneralTemplateUsage(int value) {
  templating = value;
}
int isTemplateEnabled() {
  return templating;
}

void setInternalCacheUsage(int value) {
  internalCache = value;
}
int isInternalCacheEnabled() {
  return internalCache;
}
