#include "../headerFiles/file.h"

string* loadFileName(string* path) {
  string* nFolder = createEmptyString(7);
  memcpy(nFolder->content, "website", 7);

  string* fileName = getFileName(nFolder, path);

  free(nFolder->content);
  free(nFolder);

  return fileName;
}
