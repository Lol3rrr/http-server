#include "../headerFiles/fileManager.h"

static void addFilesToCache(fileManager_t* manager, char* directory) {
  int directoryLength = strlen(directory);

  DIR* d;
  struct dirent *dir;
  d = opendir(directory);
  if (!d) {
    return;
  }

  while ((dir = readdir(d)) != NULL) {
    if (dir->d_name[0] == '.') {
      continue;
    }

    int fileLength = strlen(dir->d_name);
    int pathLength = directoryLength + 1 + fileLength;
    char* path = createEmptyCString(pathLength);
    memcpy(path, directory, directoryLength);
    path[directoryLength] = '/';
    memcpy(path + directoryLength + 1, dir->d_name, fileLength);

    if (dir->d_type == DT_REG) {
      int html = findCharArr(path, ".html", pathLength, 5) != -1;

      string fileName = {
        .content = path,
        .length = pathLength,
        .needsFree = 1
      };

      FILE* fd;

      int length = -1;
      if (isTemplateEnabled() && html) {
        char* content;
        length = loadFile(fileName, &content);

        FILE* tmpFd = tmpfile();
        fprintf(tmpFd, "%.*s", length, content);
        rewind(tmpFd);

        free(content);

        fd = tmpFd;
      } else {
        File f;
        int worked = openFile(fileName, &f);
        if (worked != 0) {
          continue;
        }
        fd = f.fd;
        length = f.length;
      }

      fileEntry_t nFile;
      nFile.fd = fd;
      nFile.length = length;
      setMap(manager->files, path, pathLength, &nFile, sizeof(nFile));
    } else if (dir->d_type == DT_DIR) {
      addFilesToCache(manager, path);
    }

    free(path);
  }
  closedir(d);
}

void populateCache(fileManager_t* manager) {
  char* rootPath = createEmptyCString(manager->rootPath.length);
  memcpy(rootPath, manager->rootPath.content, manager->rootPath.length);
  rootPath[manager->rootPath.length] = '\0';

  addFilesToCache(manager, rootPath);

  free(rootPath);
}