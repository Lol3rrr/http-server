#include "../headerFiles/fileManager.h"

int loadContent(fileManager_t* manager, string path, char** result, FILE** fd, int* closeFile, int typeID) {
  string fileName = getFileName(manager->rootPath, path);

  *fd = NULL;
  *result = NULL;
  *closeFile = 0;

  if (manager->useCache) {
    fileEntry_t* data = getMap(manager->files, fileName.content, fileName.length);
    if (data != NULL) {
      *fd = data->fd;
      
      cleanString(fileName);
      
      return data->length;
    }
  }

  if (isTemplateEnabled() && typeID == HTMLTYPE) {
    int length = loadFile(fileName, result);
    cleanString(fileName);

    return length;
  }

  File f;
  int worked = openFile(fileName, &f);
  cleanString(fileName);
  if (worked != 0) {
    return -1;
  }

  *fd = f.fd;
  *closeFile = 1;

  return f.length;
}