#ifndef BENCH_BINARY_HEADER_TREE_H
#define BENCH_BINARY_HEADER_TREE_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/binaryHeaderTree.h"

#include "general.h"

double addTreeHeaderBench(int pairs, string* keys, string* values);
void addXTreeHeadersBench(int count);

void benchAddTreeHeader();

#endif
