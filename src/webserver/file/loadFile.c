#include "../headerFiles/file.h"

int loadFile(char* fileName, char** result) {
  char* fileData;
  int size = readRawFile(fileName, &fileData);

  if (isTemplateEnabled()) {
    size = parseTemplate(fileData, size, result);
  }else {
    (*result) = fileData;
  }

  return size;
}
