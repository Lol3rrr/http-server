#include "../header.h"

void benchParseHeader() {
  parseXHeadersBench(1);
  parseXHeadersBench(2);
  parseXHeadersBench(5);
  parseXHeadersBench(10);
  parseXHeadersBench(25);
  parseXHeadersBench(50);
}
