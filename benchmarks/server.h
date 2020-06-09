#ifndef BENCH_SERVER_H
#define BENCH_SERVER_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/server.h"

#include "general.h"

void determinContentTypeBench();

void determinContentTypeBench_NoExtension();
void determinContentTypeBench_HTML();
void determinContentTypeBench_JS();
void determinContentTypeBench_CSS();
void determinContentTypeBench_IMAGE();
void determinContentTypeBench_OTHER();

#endif
