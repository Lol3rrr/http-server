#include "../server.h"

#define HTMLTYPELENGTH 23
#define CSSTYPELENGTH 22
#define JSTYPELENGTH 29
#define IMAGETYPELENGTH 9
#define TEXTTYPELENGTH 18

char* htmlType = "text/html;charset=UTF-8";
char* cssType = "text/css;charset=UTF-8";
char* jsType = "text/javascript;charset=UTF-8";
char* imageType = "image/png";
char* textType = "text;charset=UTF-8";

int determinContentType(string path, string* result, int* typeID) {
  int dot = findStr(path, ".", 1);

  result->needsFree = 0;

  if(dot == -1) {
    result->content = htmlType;
    result->length = HTMLTYPELENGTH;
    *typeID = HTMLTYPE;

    return 0;
  }

  char* extension = path.content + dot + 1;
  int length = path.length - dot - 1;

  if(memcmp(extension, "html", length) == 0) {
    result->content = htmlType;
    result->length = HTMLTYPELENGTH;
    *typeID = HTMLTYPE;
  }else if(memcmp(extension, "css", length) == 0) {
    result->content = cssType;
    result->length = CSSTYPELENGTH;
    *typeID = CSSTYPE;
  }else if(memcmp(extension, "js", length) == 0) {
    result->content = jsType;
    result->length = JSTYPELENGTH;
    *typeID = JSTYPE;
  }else if(memcmp(extension, "jpg", length) == 0) {
    result->content = imageType;
    result->length = IMAGETYPELENGTH;
    *typeID = IMAGETYPE;
  }else if(memcmp(extension, "png", length) == 0) {
    result->content = imageType;
    result->length = IMAGETYPELENGTH;
    *typeID = IMAGETYPE;
  }else {
    result->content = textType;
    result->length = TEXTTYPELENGTH;
    *typeID = TEXTTYPE;
  }

  return 0;
}
