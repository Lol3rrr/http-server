#ifndef GENERAL_H
#define GENERAL_H

#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

#define HTMLTYPE 0
#define CSSTYPE 1
#define JSTYPE 2
#define TEXTTYPE 3
#define IMAGETYPE 4

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
int internalCache;

void setDebugMode(int value);
int isDebugEnabled();

void setMeasureExec(int value);
int isMeasuringEnabled();

void setGeneralCaching(int value);
int isCachingEnabled();

void setGeneralTemplateUsage(int value);
int isTemplateEnabled();

void setInternalCacheUsage(int value);
int isInternalCacheEnabled();

int findCharArr(char* src, char* key, int srcLength, int keyLength);
int findCharArrAfter(char* src, char* key, int srcLength, int keyLength, int starting);

int stringCmp(string str1, string str2);
int findStr(string src, char* key, int keyLength);

void replaceStr(string* srcStr, string* replacementStr, int start, int lengthToReplace, char** result, int* resultLength);

char* createEmptyCString(int length);
void cleanString(string str);

char* itoa(int i, char b[]);

void* sharedMalloc(size_t size);
void sharedFree(void* ptr, size_t size);
void* sharedRealloc(void* ptr, size_t old, size_t new);

#endif
