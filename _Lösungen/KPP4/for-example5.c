#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, summe;
  for(summe = 0, i = 1; i <= 100; i = i + 1) {
    if(i%7 == 0) continue;
    summe = summe + i;
    if(summe > 1000) break;
  }

  return 0;
}
