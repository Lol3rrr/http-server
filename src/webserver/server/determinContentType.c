#include "../server.h"

#define HTMLTYPELENGTH 24
#define CSSTYPELENGTH 23

int determinContentType(string* path, char** result, int* typeID) {
  int dot = findStr(path, ".", 1);

  if(dot == -1) {
    (*result) = createEmptyCString(HTMLTYPELENGTH);
    memcpy((*result), "text/html;charset=UTF-8", HTMLTYPELENGTH);
    *typeID = HTMLTYPE;

    return 0;
  }

  int extensionLength = path->length - dot;
  char* extension = createEmptyCString(extensionLength);
  memcpy(extension, path->content + dot + 1, extensionLength);

  if(strcmp(extension, "html") == 0) {
    (*result) = createEmptyCString(HTMLTYPELENGTH);
    memcpy((*result), "text/html;charset=UTF-8", HTMLTYPELENGTH);
    *typeID = HTMLTYPE;
  }else if(strcmp(extension, "css") == 0) {
    (*result) = createEmptyCString(CSSTYPELENGTH);
    memcpy((*result), "text/css;charset=UTF-8", CSSTYPELENGTH);
    *typeID = CSSTYPE;
  }else if(strcmp(extension, "js") == 0) {
    int size = strlen("text/javascript;charset=UTF-8");
    (*result) = createEmptyCString(size);
    memcpy((*result), "text/javascript;charset=UTF-8", size);
    *typeID = JSTYPE;
  }else if(strcmp(extension, "jpg") == 0) {
    int size = strlen("image/png");
    (*result) = createEmptyCString(size);
    memcpy((*result), "image/png", size);
    *typeID = IMAGETYPE;
  }else if(strcmp(extension, "png") == 0) {
    int size = strlen("image/png");
    (*result) = createEmptyCString(size);
    memcpy((*result), "image/png", size);
    *typeID = IMAGETYPE;
  }else {
    int size = strlen("text;charset=UTF-8");
    (*result) = createEmptyCString(size);
    memcpy((*result), "text;charset=UTF-8", size);
    *typeID = TEXTTYPE;
  }

  free(extension);
  return 0;
}
