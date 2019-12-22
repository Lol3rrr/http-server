#include "../headerFiles/general.h"

string* createEmptyString(int length) {
  string* result = (string*) malloc(1 * sizeof(string));
  result->content = createEmptyCString(length);
  result->length = length;

  return result;
}
