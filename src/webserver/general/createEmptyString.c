#include "../headerFiles/general.h"

string* createEmptyString(int length) {
  char* content = (char*) malloc((length + 1) * sizeof(char));
  content[length] = '\0';

  string* result = (string*) malloc(1 * sizeof(string));
  result->content = content;
  result->length = length;

  return result;
}
