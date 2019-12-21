#ifndef FILE_H
#define FILE_H

#include <stdio.h>

#include "general.h"
#include "templating.h"

string* getFileName(string* folder, string* path);
int loadFileName(string* path, char** fileNameReturn);

int readRawFile(char* fileName, char** result);
int loadFile(char* fileName, char** result);

#endif
