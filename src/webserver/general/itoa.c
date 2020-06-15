#include "../headerFiles/general.h"

static int digits10(int numb) {
  int result = 1;
  for (;;) {
    if (numb < 10) return result;
    if (numb < 100) return result + 1;
    if (numb < 1000) return result + 2;
    if (numb < 10000) return result + 3;

    numb /= 10000;
    result += 4;
  }

  return 0;
}

char* itoa(int i, char b[]){
  const int result = digits10(i);
  int pos = result;
  if(i < 0){
    b[pos--] = '-';
    i *= -1;
  }

  while (i >= 10) {
    const int q = i / 10;
    const int r = i % 10;
    b[pos--] = '0' + r;
    i = q;
  }

  if (pos != 0) {
    b[0] = '0' + i;
  }

  return b;
}
