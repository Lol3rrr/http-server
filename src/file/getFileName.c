#include "../file.h"

int getFileName(char* folder, char* path, char** filePath) {
  int folderLength = getStringLength(folder);
  int pathLength = getStringLength(path);
  int totalLength = folderLength + pathLength;

  char* file = createEmptyCString(totalLength);
  for(int i = 0; i < totalLength; i++) {
    if (i < folderLength) {
      file[i] = folder[i];
    }else {
      file[i] = path[i - folderLength];
    }
  }

  if (file[totalLength - 1] == '/') {
    int nLength = totalLength + 10;
    char* nFile = createEmptyCString(nLength);

    for (int i = 0; i < nLength; i++) {
      if (i < totalLength) {
        nFile[i] = file[i];
      }
    }
    nFile[nLength - 10] = 'i';
    nFile[nLength - 9] = 'n';
    nFile[nLength - 8] = 'd';
    nFile[nLength - 7] = 'e';
    nFile[nLength - 6] = 'x';
    nFile[nLength - 5] = '.';
    nFile[nLength - 4] = 'h';
    nFile[nLength - 3] = 't';
    nFile[nLength - 2] = 'm';
    nFile[nLength - 1] = 'l';

    free(file);
    file = nFile;
    totalLength = nLength;
  }

  int dot = findStr(file, ".", totalLength, 1);

  if (dot == -1) {
    int nLength = totalLength + 5;
    char* nFile = createEmptyCString(nLength);

    for (int i = 0; i < nLength; i++) {
      if (i < totalLength) {
        nFile[i] = file[i];
      }
    }
    nFile[nLength - 5] = '.';
    nFile[nLength - 4] = 'h';
    nFile[nLength - 3] = 't';
    nFile[nLength - 2] = 'm';
    nFile[nLength - 1] = 'l';

    free(file);
    file = nFile;
    totalLength = nLength;
  }

  *filePath = file;

  return 0;
}
