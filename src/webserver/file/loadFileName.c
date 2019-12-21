#include "../headerFiles/file.h"

int loadFileName(string* path, char** fileNameReturn) {
  string* nFolder = createEmptyString(7);
  strncpy(nFolder->content, "website", 7);

  string* fileName = getFileName(nFolder, path);

  free(nFolder->content);
  free(nFolder);

  (*fileNameReturn) = fileName->content;

  return fileName->length;
}
