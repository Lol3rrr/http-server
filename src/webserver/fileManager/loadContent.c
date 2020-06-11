#include "../headerFiles/fileManager.h"

void loadContent(fileManager_t* manager, string path, string* result, int typeID) {
  string fileName = getFileName(manager->rootPath, path);

  fileEntry_t* data = (fileEntry_t*) getMap(manager->files, fileName.content, fileName.length);
  if (data != NULL) {
    result->length = data->length;
    result->content = data->data;
    result->needsFree = 0;
    
    cleanString(fileName);
    
    return;
  }

  int length = 0;
  if (isTemplateEnabled() && typeID == HTMLTYPE) {
    length = loadFile(fileName, &(result->content));
  } else {
    length = readRawFile(fileName.content, &(result->content));
  }

  cleanString(fileName);

  result->length = length;
  result->needsFree = 1;

  return;
}