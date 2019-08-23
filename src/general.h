#ifndef GENERAL_H
#define GENERAL_H

int debug;
int caching;

void setGeneralDebug(int value);
int isDebug();

void setGeneralCaching(int value);
int isCaching();

int getLength(char* src);
int find(char* src, char* key, int srcLength, int keyLength);

#endif
