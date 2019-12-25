#include "../headerFiles/general.h"

int stringCmp(string* str1, string* str2) {
  if (str1->length != str2->length) {
    return -1;
  }

  return strcmp(str1->content, str2->content);
}
