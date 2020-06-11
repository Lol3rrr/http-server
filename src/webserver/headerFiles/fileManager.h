#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <dirent.h>
#include <stdio.h>

#include "general.h"
#include "file.h"
#include "sharedMap.h"

typedef struct fileEntry {
  FILE* fd;
  int length;
} fileEntry_t;

typedef struct fileManager {
  int useCache;
  string rootPath;
  sharedMap_t* files;
} fileManager_t;

fileManager_t* createFileManager(char* root, int rootLength, int useCache);

void populateCache(fileManager_t* manager);
int loadContent(fileManager_t* manager, string path, char** result, FILE** fd, int* closeFile, int typeID);

#endif