#ifndef GENERAL_H
#define GENERAL_H

#include <stdlib.h>

typedef struct string {
  char* content;
  int length;
} string;


int debug;
int caching;
int measuring;
int templating;

void setDebugMode(int value);
int isDebugEnabled();

void setMeasureExec(int value);
int isMeasuringEnabled();

void setGeneralCaching(int value);
int isCachingEnabled();

void setGeneralTemplateUsage(int value);
int isTemplateEnabled();

int getStringLength(char* src);
int findStr(char* src, char* key, int srcLength, int keyLength);
int findStrAfter(char* src, char* key, int srcLength, int keyLength, int starting);

int getSubstring(char* src, int start, int length, char** result);
int replaceStr(char* src, char* replacement, int start, int lengthToReplace, char** result);

char* createEmptyCString(int length);
string* createEmptyString(int length);

#endif
