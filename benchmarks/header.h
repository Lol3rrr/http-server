#ifndef BENCH_HEADER_H
#define BENCH_HEADER_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/header.h"

#include "general.h"

void firstLineBench();
double parseHeadersBench(char* input);

void parse1HeadersBench();
void parse2HeadersBench();
void parse5HeadersBench();
void parse10HeadersBench();

void benchParseHeader();

#endif
