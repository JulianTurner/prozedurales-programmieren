#include <stdio.h>
#define WLAN 50

void chopm(char wort[]) {
  int wlen;
  for (wlen = 0; wort[wlen]; wlen++)
    ;
  if (wlen && wort[wlen - 1] == '\n') {
    wort[wlen - 1] = 0;
  }
}

int main() {
  char wort[WLAN];
  fgets(wort, WLAN, stdin);
  chopm(wort);
  printf(wort);
  return 0;
}