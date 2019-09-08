#include "../request.h"

int loadFileName(request* reqPtr, char** fileNameReturn) {
  char* folder = "website";
  char* path = reqPtr->path;

  char* fileName;
  int worked = getFileName(folder, path, &fileName);
  if (worked != 0) {
    return -1;
  }

  (*fileNameReturn) = fileName;

  int fileNameLength = getStringLength(fileName);

  return fileNameLength;
}
