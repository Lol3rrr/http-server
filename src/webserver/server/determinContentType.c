#include "../server.h"

int determinContentType(string* path, char** result) {
  int dot = findStr(path, ".", 1);

  if(dot == -1) {
    (*result) = (char*) malloc(24 * sizeof(char));
    strcpy((*result), "text/html;charset=UTF-8");

    return 0;
  }

  int extensionLength = path->length - dot;
  char* extension = createEmptyCString(extensionLength);
  memcpy(extension, path->content + dot + 1, extensionLength);

  if(strcmp(extension, "html") == 0) {
    int size = strlen("text/html;charset=UTF-8");
    (*result) = createEmptyCString(size);
    memcpy((*result), "text/html;charset=UTF-8", size);
  }else if(strcmp(extension, "css") == 0) {
    int size = strlen("text/css;charset=UTF-8");
    (*result) = createEmptyCString(size);
    memcpy((*result), "text/css;charset=UTF-8", size);
  }else if(strcmp(extension, "js") == 0) {
    int size = strlen("text/javascript;charset=UTF-8");
    (*result) = createEmptyCString(size);
    memcpy((*result), "text/javascript;charset=UTF-8", size);
  }else if(strcmp(extension, "jpg") == 0) {
    int size = strlen("image/png");
    (*result) = createEmptyCString(size);
    memcpy((*result), "image/png", size);
  }else if(strcmp(extension, "png") == 0) {
    int size = strlen("image/png");
    (*result) = createEmptyCString(size);
    memcpy((*result), "image/png", size);
  }else {
    int size = strlen("text;charset=UTF-8");
    (*result) = createEmptyCString(size);
    memcpy((*result), "text;charset=UTF-8", size);
  }

  free(extension);
  return 0;
}
