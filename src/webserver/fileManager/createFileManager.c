#include "../headerFiles/fileManager.h"

fileManager_t* createFileManager(char* root, int rootLength, int useCache) {
  fileManager_t* result = sharedMalloc(sizeof(fileManager_t));

  result->useCache = useCache;

  result->rootPath.content = sharedMalloc(rootLength * sizeof(char));
  memcpy(result->rootPath.content, root, rootLength);
  result->rootPath.length = rootLength;
  result->rootPath.needsFree = 1;

  result->files = initShared(50);

  return result;
}