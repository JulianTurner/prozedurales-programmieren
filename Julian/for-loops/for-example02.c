#include <stdio.h>

int main() {
  int i, summe;
  summe = 0;

  // in dieser Schleife werden die Zahlen von 100 bis 1 aufsummiert.
  for (i = 100; i > 1; i = i - 1) {
    summe = summe + 1;
    printf("%d\n", summe);
  }

  return 0;
}