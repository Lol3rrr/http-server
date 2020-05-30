#include "../headerFiles/response.h"

int setStreaming(response* respPtr, File f) {
  respPtr->file = f;
  respPtr->streaming = 1;
  respPtr->streamSize = f.length;

  return 0;
}
