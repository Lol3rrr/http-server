#ifndef GENERAL_H
#define GENERAL_H

#include <stdlib.h>
#include <string.h>

typedef struct string {
  char* content;
  int length;
  int needsFree;
} string;

extern const char digit[];

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

int stringCmp(string* str1, string* str2);
int findStr(string* src, char* key, int keyLength);

void getSubstring(char* src, int start, int length, char** result);
void replaceStr(string* srcStr, string* replacementStr, int start, int lengthToReplace, char** result, int* resultLength);

char* createEmptyCString(int length);
void cleanString(string str);

char* itoa(int i, char b[]);

#endif
