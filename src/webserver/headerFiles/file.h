#ifndef FILE_H
#define FILE_H

#include <stdio.h>

#include "general.h"
#include "templating.h"

string* getFileName(string* folder, string* path);
string* loadFileName(string* path);

int readRawFile(char* fileName, char** result);
int loadFile(string* fileName, char** result);

#endif
