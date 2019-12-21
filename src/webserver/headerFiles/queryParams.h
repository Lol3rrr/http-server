#ifndef QUERYPARAMS_H
#define QUERYPARAMS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "general.h"
#include "logger.h"
#include "keyValueList.h"

typedef struct queryParams {
  kvNode_t* kvNodes;
} queryParams_t;


queryParams_t* parseQueryParams(string* rawPath, char** resultPath);
int parseQueryParam(char* rawParam, queryParams_t* params);

int getQueryParam(queryParams_t* params, char* key, kvNode_t** result);

void cleanQueryParams(queryParams_t* params);

#endif
