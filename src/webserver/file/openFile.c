#include "../headerFiles/file.h"

int openFile(string* path, File* result) {
  FILE *f = fopen(path->content, "rb");
  if (f == NULL) {
    return -1;
  }
  fseek(f, 0, SEEK_END);
  int size = ftell(f);
  fseek(f, 0, SEEK_SET);

  result->fd = f;
  result->length = size;

  return 0;
}
