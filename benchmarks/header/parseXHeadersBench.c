#include "../header.h"

void parse1HeadersBench() {
  double total = parseHeadersBench("Accept: text/html\r\n\r\n");

  printDuration("Header", "Parse 01-Headers", total);
}

void parse2HeadersBench() {
  double total = parseHeadersBench("Accept: text/html\r\nAccept: text/html\r\n\r\n");

  printDuration("Header", "Parse 02-Headers", total);
}

void parse5HeadersBench() {
  double total = parseHeadersBench("Accept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\n\r\n");

  printDuration("Header", "Parse 05-Headers", total);
}

void parse10HeadersBench() {
  double total = parseHeadersBench("Accept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\nAccept: text/html\r\n\r\n");

  printDuration("Header", "Parse 10-Headers", total);
}
