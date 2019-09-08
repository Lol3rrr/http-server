#ifndef GENERAL_H
#define GENERAL_H

#include <stdlib.h>

int debug;
int caching;
int measuring;

void setDebugMode(int value);
int isDebugEnabled();

void setGeneralCaching(int value);
int isCachingEnabled();

void setMeasureExec(int value);
int isMeasuring();

int getStringLength(char* src);
int findStr(char* src, char* key, int srcLength, int keyLength);

char* createEmptyCString(int length);

#endif
