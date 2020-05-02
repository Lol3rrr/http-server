#include "../binaryHeaderTree.h"

void benchAddTreeHeader() {
  addXTreeHeadersBench(1);
  addXTreeHeadersBench(2);
  addXTreeHeadersBench(5);
  addXTreeHeadersBench(10);
  addXTreeHeadersBench(25);
  addXTreeHeadersBench(50);
  addXTreeHeadersBench(100);
}