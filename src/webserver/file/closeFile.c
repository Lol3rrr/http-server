#include "../headerFiles/file.h"

int closeFile(File* f) {
  fclose(f->fd);

  return 0;
}
