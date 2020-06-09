#include "../keyValueList.h"

void benchAddKV() {
  addXKVsBench(1);
  addXKVsBench(2);
  addXKVsBench(5);
  addXKVsBench(10);
  addXKVsBench(25);
  addXKVsBench(50);
}