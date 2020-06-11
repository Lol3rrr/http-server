#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <dirent.h>
#include <stdio.h>

#include "general.h"
#include "file.h"
#include "sharedMap.h"

typedef struct fileEntry {
  char* data;
  int length;
} fileEntry_t;

typedef struct fileManager {
  string rootPath;
  sharedMap_t* files;
} fileManager_t;

fileManager_t* createFileManager(char* root, int rootLength);

void populateCache(fileManager_t* manager);
void loadContent(fileManager_t* manager, string path, string* result, int typeID);

#endif