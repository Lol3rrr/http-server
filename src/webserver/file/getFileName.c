#include "../headerFiles/file.h"

string* getFileName(string* folder, string* path) {
  int totalLength = folder->length + path->length;

  int length = totalLength;
  char* content = NULL;

  // Check if it should default to index.html
  if (path->length == 0 || path->content[path->length - 1] == '/') {
    length += 10;
    content = createEmptyCString(length);

    memcpy(content, folder->content, folder->length);
    memcpy(content + folder->length, path->content, path->length);

    memcpy(content + totalLength, "index.html", 10);

    string* result = (string*) malloc(1 * sizeof(string));
    result->content = content;
    result->length = length;
    
    return result;
  }

  int dot = findStr(path, ".", 1);
  if (dot == -1) {
    length += 5;
    content = createEmptyCString(length);

    memcpy(content, folder->content, folder->length);
    memcpy(content + folder->length, path->content, path->length);

    memcpy(content + totalLength, ".html", 5);

    string* result = (string*) malloc(1 * sizeof(string));
    result->content = content;
    result->length = length;

    return result;
  }

  content = createEmptyCString(length);
  memcpy(content, folder->content, folder->length);
  memcpy(content + folder->length, path->content, path->length);

  string* file = (string*) malloc(1 * sizeof(string));
  file->content = content;
  file->length = length;

  return file;
}
