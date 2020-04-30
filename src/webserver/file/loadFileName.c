#include "../headerFiles/file.h"

string loadFileName(string* path) {
  string nFolder = {
    content: "website",
    length: 7
  };

  string fileName = getFileName(&nFolder, path);

  return fileName;
}
