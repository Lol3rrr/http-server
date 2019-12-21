#include "../headerFiles/file.h"

int getFileName(string* folder, string* path, char** filePath) {
  int totalLength = folder->length + path->length;

  char* file = createEmptyCString(totalLength);
  strncpy(file, folder->content, folder->length);
  strncpy(file + folder->length, path->content, path->length);

  if (file[totalLength - 1] == '/') {
    int nLength = totalLength + 10;
    char* nFile = createEmptyCString(nLength);

    strncpy(nFile, file, totalLength);
    strncpy(nFile + totalLength, "index.html", 10);

    free(file);
    file = nFile;
    totalLength = nLength;
  }

  int dot = findStr(file, ".", totalLength, 1);
  if (dot == -1) {
    int nLength = totalLength + 5;
    char* nFile = createEmptyCString(nLength);

    strncpy(nFile, file, totalLength);
    strncpy(nFile + totalLength, ".html", 5);

    free(file);
    file = nFile;
    totalLength = nLength;
  }

  *filePath = file;

  return totalLength;
}
