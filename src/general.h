#ifndef GENERAL_H
#define GENERAL_H

int debug;
int caching;
int measuring;

void setGeneralDebug(int value);
int isDebug();

void setGeneralCaching(int value);
int isCaching();

void setMeasureExec(int value);
int isMeasuring();

int getLength(char* src);
int find(char* src, char* key, int srcLength, int keyLength);

#endif
