#include "../headerFiles/file.h"

int loadFileName(char* path, char** fileNameReturn) {
  char* folder = "website";

  char* fileName;
  int worked = getFileName(folder, path, &fileName);
  if (worked != 0) {
    return -1;
  }

  (*fileNameReturn) = fileName;

  int fileNameLength = getStringLength(fileName);

  return fileNameLength;
}
