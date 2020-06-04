#include "../response.h"

void addHeaders(response* resp, int count) {
  for (int i = 0; i < count; i++) {
    char key[17];
    char value[16];

    sprintf(key, "Header%d", i);
    sprintf(value, "Value%d", i);
    
    string keyStr = {
      .content = key,
      .length = strlen(key)
    };
    string valueStr = {
      .content = value,
      .length = strlen(value)
    };
    addHeader(resp, keyStr, valueStr);
  }
}

void createHTTPHeaderPartBench_1Header() {
  response tmpResp = {
    .bTreeHeaders = NULL
  };

  addHeaders(&tmpResp, 1);

  double total = benchCreateHTTPHeaderPart(&tmpResp);

  cleanResponse(&tmpResp);

  printDuration("Response", "CreateHTTPHeaderPart - 01 Header", total);
}

void createHTTPHeaderPartBench_2Header() {
  response tmpResp = {
    .bTreeHeaders = NULL
  };
  addHeaders(&tmpResp, 2);

  double total = benchCreateHTTPHeaderPart(&tmpResp);

  cleanResponse(&tmpResp);

  printDuration("Response", "CreateHTTPHeaderPart - 02 Header", total);
}

void createHTTPHeaderPartBench_5Header() {
  response tmpResp = {
    .bTreeHeaders = NULL
  };
  addHeaders(&tmpResp, 5);

  double total = benchCreateHTTPHeaderPart(&tmpResp);

  cleanResponse(&tmpResp);

  printDuration("Response", "CreateHTTPHeaderPart - 05 Header", total);
}

void createHTTPHeaderPartBench_10Header() {
  response tmpResp = {
    .bTreeHeaders = NULL
  };

  addHeaders(&tmpResp, 10);

  double total = benchCreateHTTPHeaderPart(&tmpResp);

  cleanResponse(&tmpResp);

  printDuration("Response", "CreateHTTPHeaderPart - 10 Header", total);
}