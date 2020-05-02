#include "../binaryHeaderTree.h"

void addXTreeHeadersBench(int count) {
  string* keys = (string*) malloc(count * sizeof(string));
  string* values = (string*) malloc(count * sizeof(string));

  srand(1398071239);

  for (int i = 0; i < count; i++) {
    int length = 2 + 13;
    string tmpKey = {
      .length = length,
      .content = createEmptyCString(length)
    };
    string tmpValue = {
      .length = length,
      .content = createEmptyCString(length)
    };

    sprintf(tmpKey.content, "%06d-K", rand());
    sprintf(tmpValue.content, "%06d-V", rand());

    keys[i] = tmpKey;
    values[i] = tmpValue;
  }

  double total = addTreeHeaderBench(count, keys, values);

  char nameBuffer[21];
  sprintf(nameBuffer, "Push %06d-Headers", count);
  nameBuffer[20] = '\0';
  printDuration("Binary Header Tree", nameBuffer, total);
}