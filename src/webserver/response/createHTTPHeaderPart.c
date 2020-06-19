#include "../headerFiles/response.h"

typedef struct {
  int length;
  int spacerLength;
} HeaderLengthHelper_t;

typedef struct {
  char* buffer;
  char* spacer;
  int spacerLength;
} HeaderPartHelper_t;

static void addHeaderToBuffer(kvNode_t* node, void** data) {
  HeaderPartHelper_t* helper = (HeaderPartHelper_t*) *data;

  int pairLength = createHeaderPair(node, helper->buffer);
  helper->buffer += pairLength;

  memcpy(helper->buffer, helper->spacer, helper->spacerLength);
  helper->buffer += helper->spacerLength;
}

int createHTTPHeaderPart(response* respPtr, char* spacer, int spacerLength, char* headerPart) {
  int headerLength = respPtr->headerResponseSize;

  HeaderPartHelper_t helperData = {
    .buffer = headerPart,
    .spacer = spacer,
    .spacerLength = spacerLength
  };

  HeaderPartHelper_t* helperPtr = &helperData;
  void** dataPointer = (void**) &helperPtr;
  forEach(respPtr->headerList, dataPointer, &addHeaderToBuffer);

  return headerLength;
}
