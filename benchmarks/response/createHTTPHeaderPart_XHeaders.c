#include "../response.h"

void createHTTPHeaderPartBench_1Header() {
  response tmpResp = {
    .headers = {
      .kvNodes = NULL
    }
  };
  addHeader(&tmpResp, "Header1", "Value1");

  double total = benchCreateHTTPHeaderPart(&tmpResp);

  printDuration("Response", "CreateHTTPHeaderPart - 01 Header", total);
}

void createHTTPHeaderPartBench_2Header() {
  response tmpResp = {
    .headers = {
      .kvNodes = NULL
    }
  };
  addHeader(&tmpResp, "Header1", "Value1");
  addHeader(&tmpResp, "Header2", "Value2");

  double total = benchCreateHTTPHeaderPart(&tmpResp);

  printDuration("Response", "CreateHTTPHeaderPart - 02 Header", total);
}

void createHTTPHeaderPartBench_5Header() {
  response tmpResp = {
    .headers = {
      .kvNodes = NULL
    }
  };
  addHeader(&tmpResp, "Header1", "Value1");
  addHeader(&tmpResp, "Header2", "Value2");
  addHeader(&tmpResp, "Header3", "Value3");
  addHeader(&tmpResp, "Header4", "Value4");
  addHeader(&tmpResp, "Header5", "Value5");

  double total = benchCreateHTTPHeaderPart(&tmpResp);

  printDuration("Response", "CreateHTTPHeaderPart - 05 Header", total);
}

void createHTTPHeaderPartBench_10Header() {
  response tmpResp = {
    .headers = {
      .kvNodes = NULL
    }
  };
  addHeader(&tmpResp, "Header1", "Value1");
  addHeader(&tmpResp, "Header2", "Value2");
  addHeader(&tmpResp, "Header3", "Value3");
  addHeader(&tmpResp, "Header4", "Value4");
  addHeader(&tmpResp, "Header5", "Value5");
  addHeader(&tmpResp, "Header6", "Value6");
  addHeader(&tmpResp, "Header7", "Value7");
  addHeader(&tmpResp, "Header8", "Value8");
  addHeader(&tmpResp, "Header9", "Value9");
  addHeader(&tmpResp, "Header10", "Value10");

  double total = benchCreateHTTPHeaderPart(&tmpResp);

  printDuration("Response", "CreateHTTPHeaderPart - 10 Header", total);
}