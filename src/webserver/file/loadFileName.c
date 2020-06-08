#include "../headerFiles/file.h"

string loadFileName(string path) {
  string nFolder = {
    .content = "website",
    .length = 7
  };

  return getFileName(nFolder, path);
}
