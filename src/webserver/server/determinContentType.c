#include "../server.h"

#define HTMLTYPELENGTH 24
#define CSSTYPELENGTH 23
#define JSTYPELENGTH 30
#define IMAGETYPELENGTH 10
#define TEXTTYPELENGTH 19

int determinContentType(string path, char** result, int* typeID) {
  int dot = findStr(path, ".", 1);

  if(dot == -1) {
    (*result) = createEmptyCString(HTMLTYPELENGTH);
    memcpy((*result), "text/html;charset=UTF-8", HTMLTYPELENGTH);
    *typeID = HTMLTYPE;

    return 0;
  }

  char* extension = path.content + dot + 1;
  int length = path.length - dot - 1;

  if(strncmp(extension, "html", length) == 0) {
    (*result) = createEmptyCString(HTMLTYPELENGTH);
    memcpy((*result), "text/html;charset=UTF-8", HTMLTYPELENGTH);
    *typeID = HTMLTYPE;
  }else if(strncmp(extension, "css", length) == 0) {
    (*result) = createEmptyCString(CSSTYPELENGTH);
    memcpy((*result), "text/css;charset=UTF-8", CSSTYPELENGTH);
    *typeID = CSSTYPE;
  }else if(strncmp(extension, "js", length) == 0) {
    (*result) = createEmptyCString(JSTYPELENGTH);
    memcpy((*result), "text/javascript;charset=UTF-8", JSTYPELENGTH);
    *typeID = JSTYPE;
  }else if(strncmp(extension, "jpg", length) == 0) {
    (*result) = createEmptyCString(IMAGETYPELENGTH);
    memcpy((*result), "image/png", IMAGETYPELENGTH);
    *typeID = IMAGETYPE;
  }else if(strncmp(extension, "png", length) == 0) {
    (*result) = createEmptyCString(IMAGETYPELENGTH);
    memcpy((*result), "image/png", IMAGETYPELENGTH);
    *typeID = IMAGETYPE;
  }else {
    (*result) = createEmptyCString(TEXTTYPELENGTH);
    memcpy((*result), "text;charset=UTF-8", TEXTTYPELENGTH);
    *typeID = TEXTTYPE;
  }

  return 0;
}
