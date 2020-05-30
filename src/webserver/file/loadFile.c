#include "../headerFiles/file.h"

int loadFile(string fileName, char** result) {
  char* fileData;
  int size = readRawFile(fileName.content, &fileData);

  if (isTemplateEnabled()) {
    return parseTemplate(fileData, size, result);
  }

  (*result) = fileData;
  return size;
}
