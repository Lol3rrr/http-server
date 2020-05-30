#ifndef FILE_H
#define FILE_H

#include <stdio.h>

#include "general.h"
#include "templating.h"


typedef struct File {
  FILE* fd;
  int length;
} File;


// Returns
// < 0: An error occured
// 0: Worked
int openFile(string path, File* result);
// Returns
// 0: Worked
int closeFile(File* f);

// Returns a string struct with the path as the content
string getFileName(string folder, string path);
// Returns a string struct with the path, 
// relative to the website dir, as content
string loadFileName(string path);

// Loads the content of the file into result
// Returns
// < 0: An error occured
// >= 0: The size of the content loaded
int readRawFile(char* fileName, char** result);
// Loads the file and already applies the template parsing
// to the content loaded
// Returns the size of the data loaded
int loadFile(string fileName, char** result);

#endif
