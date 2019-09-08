#ifndef FILE_H
#define FILE_H

#include <stdio.h>

#include "../headerFiles/general.h"
#include "../headerFiles/templating.h"

int getFileName(char* folder, char* path, char** filePath);
int loadFileName(char* path, char** fileNameReturn);

int readRawFile(char* fileName, char** result);
int loadFile(char* fileName, char** result);

#endif
