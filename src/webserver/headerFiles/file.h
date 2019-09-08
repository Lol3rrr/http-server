#ifndef FILE_H
#define FILE_H

#include <stdio.h>

#include "../headerFiles/general.h"

int getFileName(char* folder, char* path, char** filePath);
int readFile(char* fileName, char** result);

#endif
