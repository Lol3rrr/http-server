#include "../headerFiles/file.h"

string* getFileName(string* folder, string* path) {
  int totalLength = folder->length + path->length;

  string* file = createEmptyString(totalLength);

  strncpy(file->content, folder->content, folder->length);
  strncpy(file->content + folder->length, path->content, path->length);

  if (file->content[file->length - 1] == '/') {
    int nLength = file->length + 10;
    char* nFile = createEmptyCString(nLength);

    strncpy(nFile, file->content, file->length);
    strncpy(nFile + file->length, "index.html", 10);

    free(file->content);
    file->content = nFile;
    file->length = nLength;
  }

  int dot = findCharArr(file->content, ".", file->length, 1);
  if (dot == -1) {
    int nLength = file->length + 5;
    char* nFile = createEmptyCString(nLength);

    strncpy(nFile, file->content, file->length);
    strncpy(nFile + file->length, ".html", 5);

    free(file->content);
    file->content = nFile;
    file->length = nLength;
  }

  return file;
}
