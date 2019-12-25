#ifndef GENERAL_H
#define GENERAL_H

#include <stdlib.h>
#include <string.h>

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

int findCharArr(char* src, char* key, int srcLength, int keyLength);
int findCharArrAfter(char* src, char* key, int srcLength, int keyLength, int starting);

string* getSubstring(char* src, int start, int length);
string* replaceStr(char* src, char* replacement, int start, int lengthToReplace);

char* createEmptyCString(int length);
string* createEmptyString(int length);

string* createString(char* content, int length);

#endif
