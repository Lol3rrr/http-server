#include "../headerFiles/fileManager.h"

fileManager_t* createFileManager(char* root, int rootLength, int useCache) {
  fileManager_t* result = (fileManager_t*) sharedMalloc(sizeof(fileManager_t));

  result->useCache = useCache;

  result->rootPath.content = (char*) sharedMalloc(rootLength * sizeof(char));
  memcpy(result->rootPath.content, root, rootLength);
  result->rootPath.length = rootLength;
  result->rootPath.needsFree = 1;

  result->files = initShared(64);

  return result;
}