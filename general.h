#ifndef GENERAL_H
#define GENERAL_H

int debug;

void setGeneralDebug(int value);
int isDebug();

int getLength(char* src);
int find(char* src, char* key, int srcLength, int keyLength);

#endif
