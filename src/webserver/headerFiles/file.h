#ifndef FILE_H
#define FILE_H

#include <stdio.h>

#include "general.h"
#include "templating.h"

int getFileName(string* folder, string* path, char** filePath);
int loadFileName(char* path, char** fileNameReturn);

int readRawFile(char* fileName, char** result);
int loadFile(char* fileName, char** result);

#endif
