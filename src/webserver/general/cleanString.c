#include "../headerFiles/general.h"

void cleanString(string str) {
  if (str.needsFree && str.content != NULL) {
    free(str.content);
  }
}