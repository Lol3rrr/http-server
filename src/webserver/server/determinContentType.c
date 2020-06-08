#include "../server.h"

#define HTMLTYPELENGTH 23
#define CSSTYPELENGTH 22
#define JSTYPELENGTH 29
#define IMAGETYPELENGTH 9
#define TEXTTYPELENGTH 18

int determinContentType(string path, string* result, int* typeID) {
  int dot = findStr(path, ".", 1);

  if(dot == -1) {
    result->content = (char*) malloc(HTMLTYPELENGTH * sizeof(char));
    result->length = HTMLTYPELENGTH;
    result->needsFree = 1;
    memcpy(result->content, "text/html;charset=UTF-8", HTMLTYPELENGTH);
    *typeID = HTMLTYPE;

    return 0;
  }

  char* extension = path.content + dot + 1;
  int length = path.length - dot - 1;

  result->needsFree = 1;

  if(memcmp(extension, "html", length) == 0) {
    result->content = (char*) malloc(HTMLTYPELENGTH * sizeof(char));
    result->length = HTMLTYPELENGTH;
    memcpy(result->content, "text/html;charset=UTF-8", HTMLTYPELENGTH);
    *typeID = HTMLTYPE;
  }else if(memcmp(extension, "css", length) == 0) {
    result->content = (char*) malloc(CSSTYPELENGTH * sizeof(char));
    result->length = CSSTYPELENGTH;
    memcpy(result->content, "text/css;charset=UTF-8", CSSTYPELENGTH);
    *typeID = CSSTYPE;
  }else if(memcmp(extension, "js", length) == 0) {
    result->content = (char*) malloc(JSTYPELENGTH * sizeof(char));
    result->length = JSTYPELENGTH;
    memcpy(result->content, "text/javascript;charset=UTF-8", JSTYPELENGTH);
    *typeID = JSTYPE;
  }else if(memcmp(extension, "jpg", length) == 0) {
    result->content = (char*) malloc(IMAGETYPELENGTH * sizeof(char));
    result->length = IMAGETYPELENGTH;
    memcpy(result->content, "image/png", IMAGETYPELENGTH);
    *typeID = IMAGETYPE;
  }else if(memcmp(extension, "png", length) == 0) {
    result->content = (char*) malloc(IMAGETYPELENGTH * sizeof(char));
    result->length = IMAGETYPELENGTH;
    memcpy(result->content, "image/png", IMAGETYPELENGTH);
    *typeID = IMAGETYPE;
  }else {
    result->content = (char*) malloc(TEXTTYPELENGTH * sizeof(char));
    result->length = TEXTTYPELENGTH;
    memcpy(result->content, "text;charset=UTF-8", TEXTTYPELENGTH);
    *typeID = TEXTTYPE;
  }

  return 0;
}
