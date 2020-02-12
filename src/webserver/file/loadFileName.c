#include "../headerFiles/file.h"

string loadFileName(string* path) {
  string nFolder = {
    content: createEmptyCString(7),
    length: 7
  };
  memcpy(nFolder.content, "website", 7);

  string fileName = getFileName(&nFolder, path);

  free(nFolder.content);

  return fileName;
}
