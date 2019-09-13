#include "../server.h"

int determinContentType(char* path, char** result) {
  int length = getStringLength(path);
  int dot = findStr(path, ".", length, 1);

  if(dot == -1 || length == -1) {
    (*result) = (char*) malloc(24 * sizeof(char));
    strcpy((*result), "text/html;charset=UTF-8");

    return 0;
  }

  int extensionLenght = length - dot;
  char* extension = (char*) malloc((extensionLenght + 1) * sizeof(char));
  extension[extensionLenght] = '\0';
  for (int i = 0; i < extensionLenght; i++) {
    extension[i] = path[i + dot + 1];
  }

  if(strcmp(extension, "html") == 0) {
    (*result) = (char*) malloc(24 * sizeof(char));
    strcpy((*result), "text/html;charset=UTF-8");
  }else if(strcmp(extension, "css") == 0) {
    (*result) = (char*) malloc(23 * sizeof(char));
    strcpy((*result), "text/css;charset=UTF-8");
  }else if(strcmp(extension, "js") == 0) {
    (*result) = (char*) malloc(30 * sizeof(char));
    strcpy((*result), "text/javascript;charset=UTF-8");
  }else if(strcmp(extension, "jpg") == 0) {
    (*result) = (char*) malloc(10 * sizeof(char));
    strcpy((*result), "image/png");
  }else if(strcmp(extension, "png") == 0) {
    (*result) = (char*) malloc(10 * sizeof(char));
    strcpy((*result), "image/png");
  }else {
    (*result) = (char*) malloc(18 * sizeof(char));
    strcpy((*result), "text;charset=UTF-8");
  }

  free(extension);
  return 0;
}