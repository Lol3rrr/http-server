#include "../headerFiles/file.h"

string* loadFileName(string* path) {
  string* nFolder = createEmptyString(7);
  strncpy(nFolder->content, "website", 7);

  string* fileName = getFileName(nFolder, path);

  free(nFolder->content);
  free(nFolder);

  return fileName;
}
