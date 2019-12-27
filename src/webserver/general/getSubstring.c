#include "../headerFiles/general.h"

string* getSubstring(char* src, int start, int length) {
  string* substr = createEmptyString(length);
  memcpy(substr->content, src + start, length);

  return substr;
}
