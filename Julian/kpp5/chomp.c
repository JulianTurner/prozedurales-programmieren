#include <stdio.h>

#define WLEN 50

int main() {

  char wort[WLEN] = "yafet";

  int len;
  for (len = 0; wort[len]; len++)
    ;
  if (wort[len - 1] == '\n') {
    wort[len - 1] = 0;
  }

  return 0;
}