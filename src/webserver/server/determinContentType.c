#include "../server.h"

#define HTMLTYPELENGTH 24
#define CSSTYPELENGTH 23
#define JSTYPELENGTH 30
#define IMAGETYPELENGTH 10
#define TEXTTYPELENGTH 19

int determinContentType(string path, string* result, int* typeID) {
  int dot = findStr(path, ".", 1);

  if(dot == -1) {
    result->content = createEmptyCString(HTMLTYPELENGTH);
    result->length = HTMLTYPELENGTH;
    result->needsFree = 1;
    memcpy(result->content, "text/html;charset=UTF-8", HTMLTYPELENGTH);
    *typeID = HTMLTYPE;

    return 0;
  }

  char* extension = path.content + dot + 1;
  int length = path.length - dot - 1;

  result->needsFree = 1;

  if(strncmp(extension, "html", length) == 0) {
    result->content = createEmptyCString(HTMLTYPELENGTH);
    result->length = HTMLTYPELENGTH;
    memcpy(result->content, "text/html;charset=UTF-8", HTMLTYPELENGTH);
    *typeID = HTMLTYPE;
  }else if(strncmp(extension, "css", length) == 0) {
    result->content = createEmptyCString(CSSTYPELENGTH);
    result->length = CSSTYPELENGTH;
    memcpy(result->content, "text/css;charset=UTF-8", CSSTYPELENGTH);
    *typeID = CSSTYPE;
  }else if(strncmp(extension, "js", length) == 0) {
    result->content = createEmptyCString(JSTYPELENGTH);
    result->length = JSTYPELENGTH;
    memcpy(result->content, "text/javascript;charset=UTF-8", JSTYPELENGTH);
    *typeID = JSTYPE;
  }else if(strncmp(extension, "jpg", length) == 0) {
    result->content = createEmptyCString(IMAGETYPELENGTH);
    result->length = IMAGETYPELENGTH;
    memcpy(result->content, "image/png", IMAGETYPELENGTH);
    *typeID = IMAGETYPE;
  }else if(strncmp(extension, "png", length) == 0) {
    result->content = createEmptyCString(IMAGETYPELENGTH);
    result->length = IMAGETYPELENGTH;
    memcpy(result->content, "image/png", IMAGETYPELENGTH);
    *typeID = IMAGETYPE;
  }else {
    result->content = createEmptyCString(TEXTTYPELENGTH);
    result->length = TEXTTYPELENGTH;
    memcpy(result->content, "text;charset=UTF-8", TEXTTYPELENGTH);
    *typeID = TEXTTYPE;
  }

  return 0;
}
