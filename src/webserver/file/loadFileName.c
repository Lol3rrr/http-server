#include "../headerFiles/file.h"

int loadFileName(char* pathContent, char** fileNameReturn) {
  string* nFolder = createEmptyString(7);
  strncpy(nFolder->content, "website", 7);

  int pathLength = strlen(pathContent);
  string* path = createEmptyString(pathLength);
  strncpy(path->content, pathContent, pathLength);

  char* fileName;
  int length = getFileName(nFolder, path, &fileName);
  if (length < 0) {
    return -1;
  }

  free(nFolder->content);
  free(nFolder);

  (*fileNameReturn) = fileName;

  return length;
}
