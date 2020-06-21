#include "utest.h"

#include "../src/webserver/headerFiles/general.h"

#ifndef GENERAL_TEST_H
#define GENERAL_TEST_H

UTEST(general, findCharArr) {
  char* src  = "Here is a simple test string";
  char* key = "is";
  int srcLength = strlen(src);
  int keyLength = strlen(key);


  int output = 5;
  int result = findCharArr(src, key, srcLength, keyLength);
  ASSERT_EQ(output, result);
}

UTEST(general, findCharArrAfter) {
  char* src  = "test string test";
  char* key = "test";
  int srcLength = strlen(src);
  int keyLength = strlen(key);
  int offset = 4;


  int output = 12;
  int result = findCharArrAfter(src, key, srcLength, keyLength, offset);
  ASSERT_EQ(output, result);
}


#endif