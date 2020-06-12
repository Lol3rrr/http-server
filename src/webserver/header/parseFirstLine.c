#include "../headerFiles/header.h"

int parseFirstLine(char* header, int headerLength, string* method, string* pathPtr, string* protokolPtr) {
  string* parts[3] = {method, pathPtr, protokolPtr};

  int currentPart = 0;

  char* tmpHeader = header;
  char* end = header + headerLength;
  int start = 0;
  while (tmpHeader < end && currentPart < 3) {
    while(*tmpHeader != ' ' && *tmpHeader != '\r') {
      tmpHeader++;
    }

    int length = tmpHeader - (header + start);
    parts[currentPart]->length = length;
    parts[currentPart]->content = header + start;
    parts[currentPart]->needsFree = 0;

    tmpHeader++;
    currentPart++;
    start = tmpHeader - header;
  }

  return (currentPart == 3) ? tmpHeader - header : -1;
}
