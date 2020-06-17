#ifndef QUERYPARAMS_H
#define QUERYPARAMS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "general.h"
#include "logger.h"
#include "keyValueList.h"

#define QUERYPARAMS_BUFFER 10

typedef struct queryParams {
  int exists;
  kvList_t list;
} queryParams_t;


queryParams_t createEmptyQueryParams();
void parseQueryParams(string rawPath, string* resultPath, queryParams_t* params);

int getQueryParam(queryParams_t params, char* key, kvNode_t** result);

void cleanQueryParams(queryParams_t params);
void resetQueryParams(queryParams_t* params);

#endif
