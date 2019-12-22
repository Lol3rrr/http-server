#include "../headerFiles/file.h"

int loadFile(string* fileName, char** result) {
  char* fileData;
  int size = readRawFile(fileName->content, &fileData);

  if (isTemplateEnabled()) {
    size = parseTemplate(fileData, size, result);
  }else {
    (*result) = fileData;
  }

  return size;
}
