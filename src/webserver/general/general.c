#include "../headerFiles/general.h"

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
