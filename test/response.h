#include "utest.h"

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/response.h"

#ifndef RESPONSE_TEST_H
#define RESPONSE_TEST_H

UTEST(response, createHTTPResponse) {
  string protokol = {
    .content = "HTTP/1.1",
    .length = 8,
    .needsFree = 0
  };
  string statusMessage = {
    .content = "OK",
    .length = 2,
    .needsFree = 0
  };

  response tmpResp = createEmptyResponse();
  setResponse(&tmpResp, protokol);
  setStatus(&tmpResp, 200, statusMessage);

  char* result = "HTTP/1.1 200 OK\r\nServer: Lol3r-C/2.1\r\n\r\n";

  string outputStr;
  int worked = createHTTPResponse(&tmpResp, &outputStr);
  ASSERT_FALSE(worked);

  ASSERT_STREQ(result, outputStr.content, outputStr.length);
}

#endif