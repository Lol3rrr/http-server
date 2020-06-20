#include "utest.h"

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/header.h"

#ifndef HEADERS_TEST_H
#define HEADERS_TEST_H

UTEST(header, parseFirstLine) {
  char firstLine[] = "GET / HTTP/1.1\r\n\0";
  int lineLength = sizeof(firstLine) - 1;
  char* method = "GET";
  char* path = "/";
  char* protocol = "HTTP/1.1";

  string methodStr;
  string pathStr;
  string protocolStr;

  int output = parseFirstLine(firstLine, lineLength, &methodStr, &pathStr, &protocolStr);
  int result = lineLength - 1;

  ASSERT_STREQ(method, methodStr.content, methodStr.length);
  ASSERT_STREQ(path, pathStr.content, pathStr.length);
  ASSERT_STREQ(protocol, protocolStr.content, protocolStr.length);
  ASSERT_EQ(output, result);
}

UTEST(header, parseHeaders) {
  char* headerLine = "Header0: Value0\r\nHeader1: Value1\r\nHeader2: Value2\r\nHeader3: Value3\r\n\r\n\0";
  int headerLength = strlen(headerLine);
  int resultEnd = headerLength;

  int pairs = 4;
  char** headers = malloc(pairs * sizeof(char*));
  char** values = malloc(pairs * sizeof(char*));
  for (int i = 0; i < pairs; i++) {
    headers[i] = malloc(8 * sizeof(char*));
    memcpy(headers[i], "HeaderX\0", 8);
    headers[i][6] = '0' + i;
    values[i] = malloc(7 * sizeof(char*));
    memcpy(values[i], "ValueX\0", 7);
    values[i][5] = '0' + i;
  }

  int outputEnd = -1;
  headers_t headerResult = createEmptyHeaders();

  int result = parseHeaders(headerLine, headerLength, &headerResult, &outputEnd);

  ASSERT_EQ(resultEnd, outputEnd);
  ASSERT_FALSE(result);

  for (int i = 0; i < pairs; i++) {
    if (i < HEADER_BUFFER) {
      kvNode_t entry = headerResult.list.buffer[i];
      ASSERT_FALSE(memcmp(headers[i], entry.key.content, entry.key.length));
      ASSERT_FALSE(memcmp(values[i], entry.value.content, entry.value.length));
    }
  }
}

#endif