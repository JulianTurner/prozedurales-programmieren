#include <stdio.h>

int main() {
  int i, summe;

  // in dieser Schleife wird die Initialisierung in den Schleifenkopf
  // aufgenommen.
  for (summe = 0; i <= 100; i = i + 1) {
    summe = summe + 1;
    printf("%d\n", summe);
  }

  return 0;
}