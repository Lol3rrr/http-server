#include "../headerFiles/general.h"

string* replaceStr(char* src, char* replacement, int start, int lengthToReplace) {
  int srcLength = strlen(src);
  int replacementLength = strlen(replacement);

  int totalLength = srcLength - lengthToReplace + replacementLength;
  string* result = createEmptyString(totalLength);

  int contentOffset = 0;
  strncpy(result->content + contentOffset, src, start);
  contentOffset += start;
  strncpy(result->content + contentOffset, replacement, replacementLength);
  contentOffset += replacementLength;
  strncpy(result->content + contentOffset, src + start + lengthToReplace, srcLength - (start + lengthToReplace));

  return result;
}
