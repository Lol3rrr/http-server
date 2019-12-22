#include "../headerFiles/general.h"

string* createString(char* content, int length) {
  string* result = (string*) malloc(1 * sizeof(string));
  result->content = content;
  result->length = length;

  return result;
}
