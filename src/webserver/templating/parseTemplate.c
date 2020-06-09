#include "../headerFiles/templating.h"

#define INCLUDESTARTLENGTH 10
#define INCLUDEENDLENGTH 2

int removeIncludePartOnError(int start, int length, char* data, int dataLength) {
  // Copies the part after the include string
  memcpy(data + start, data + start + length, dataLength - start - length);

  return dataLength - length;
}

// TODO: Read the File-Data directly into the new array to avoid another malloc and memcpy call
int handleIncludeStatement(string includeStr, int includeStart, char** data, int rawDataLength) {
  includeStatement statement;
  int worked = parseIncludeStatement(includeStr, &statement);
  if (worked != 0) {
    return rawDataLength;
  }

  File f;
  worked = openFile(statement.filePath, &f);
  cleanString(statement.filePath);
  if (worked != 0) {
    int nLength = removeIncludePartOnError(includeStart, includeStr.length, *data, rawDataLength);
    return nLength;
  }

  int dataLength = rawDataLength - includeStr.length;
  int nContentLength = dataLength + f.length;

  char* nContent = malloc((nContentLength) * sizeof(char));
  if (f.length != fread(nContent + includeStart, sizeof(char), f.length, f.fd)) {
    closeFile(&f);
    free(nContent);

    int nLength = removeIncludePartOnError(includeStart, includeStr.length, *data, rawDataLength);
    return nLength;
  }

  closeFile(&f);

  // Copies the part before the include string
  memcpy(nContent, (*data), includeStart);
  // Copies the part after the include string
  memcpy(nContent + includeStart + f.length, (*data) + includeStart + includeStr.length, nContentLength - includeStart - f.length);

  free(*data);
  *data = nContent;

  return nContentLength;
}

// TODO:
// Reduce the amount of calls to malloc, like a lot
// Use the KV-List to store each part (before and after each include + the text to include)
// then at the end malloc new block once and copy it all into that one
int parseTemplate(char* rawContent, int rawContentLength, char** result) {
  int contentLength = rawContentLength;
  char* content = rawContent;

  if (contentLength <= 0 || content == NULL)
    return -1;

  int includeStart = findCharArr(content, "<--include", contentLength, INCLUDESTARTLENGTH);
  while (includeStart != -1) {
    int includeInnerStart = includeStart + INCLUDESTARTLENGTH;
    int includeEnd = findCharArrAfter(content, "/>", contentLength, INCLUDEENDLENGTH, includeStart);
    includeEnd += 2;

    int includeStrLength = (includeEnd - includeStart);
    string includeStr = {
      .content = content + includeStart,
      .length = includeStrLength,
    };

    contentLength = handleIncludeStatement(includeStr, includeStart, &content, contentLength);

    includeStart = findCharArrAfter(content, "<--include", contentLength, INCLUDESTARTLENGTH, includeStart);
  }

  (*result) = content;

  return contentLength;
}
