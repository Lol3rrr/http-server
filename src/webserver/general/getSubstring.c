#include "../headerFiles/general.h"

string* getSubstring(char* src, int start, int length) {
  string* substr = createEmptyString(length);
  strncpy(substr->content, src + start, length);

  return substr;
}
