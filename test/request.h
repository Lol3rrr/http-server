#include "utest.h"

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/request.h"

#ifndef REQUEST_TEST_H
#define REQUEST_TEST_H

UTEST(request, parseRequest) {
  char requestChar[] = "GET /test?param0=value0 HTTP/1.1\r\nheader0: value0\r\nheader1: value1\r\n\r\n\0";
  int requestCharLength = sizeof(requestChar) - 1;

  request resultReq = createEmptyRequest();
  memcpy(resultReq.initialContent, requestChar, requestCharLength);
  int result = parseRequest(&resultReq, requestCharLength);

  ASSERT_FALSE(result);
  ASSERT_FALSE(memcmp("GET", resultReq.method.content, resultReq.method.length));
  ASSERT_FALSE(memcmp("/test", resultReq.path.content, resultReq.path.length));
  ASSERT_FALSE(memcmp("HTTP/1.1", resultReq.protokol.content, resultReq.protokol.length));

  int paramCount = 1;
  kvNode_t* params = malloc(paramCount * sizeof(kvNode_t));
  for (int i  = 0; i < paramCount; i++) {
    params[i].key.content = createEmptyCString(6);
    memcpy(params[i].key.content, "param", 5);
    params[i].key.content[5] = '0' + i;
    params[i].key.length = 6;
    params[i].key.needsFree = 1;

    params[i].value.content = createEmptyCString(6);
    memcpy(params[i].value.content, "value", 5);
    params[i].value.content[5] = '0' + i;
    params[i].value.needsFree = 1;
    params[i].value.length = 6;
  }
  ASSERT_TRUE(resultReq.params.exists);
  for (int i = 0; i < paramCount; i++) {
    if (i < resultReq.params.list.bufferSize) {
      kvNode_t expected = params[i];
      kvNode_t actual = resultReq.params.list.buffer[i];
      ASSERT_STREQ(expected.key.content, actual.key.content, actual.key.length);
      ASSERT_STREQ(expected.value.content, actual.value.content, actual.value.length);
    }
  }

  int headerCount = 2;
  kvNode_t* headers = malloc(headerCount * sizeof(kvNode_t));
  for (int i = 0; i < headerCount; i++) {
    headers[i].key.content = createEmptyCString(7);
    memcpy(headers[i].key.content, "header", 6);
    headers[i].key.content[6] = '0' + i;
    headers[i].key.length = 7;
    headers[i].key.needsFree = 1;

    headers[i].value.content = createEmptyCString(6);
    memcpy(headers[i].value.content, "value", 5);
    headers[i].value.content[5] = '0' + i;
    headers[i].value.needsFree = 1;
    headers[i].value.length = 6;
  }

  for (int i = 0; i < headerCount; i++) {
    if (i < resultReq.headers.list.bufferSize) {
      kvNode_t expected = headers[i];
      kvNode_t actual = resultReq.headers.list.buffer[i];
      ASSERT_STREQ(expected.key.content, actual.key.content, actual.key.length);
      ASSERT_STREQ(expected.value.content, actual.value.content, actual.value.length);
    }
  }
}

#endif