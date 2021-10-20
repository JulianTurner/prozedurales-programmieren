#include <stdio.h>

int main() {
  int i, summe;

  // in dieser Schleife werden alle durch 7 teilbare Zahlen
  // nicht zur Summe gerechnet und die Schleife abgerochen,
  // sobald die Summe den Wert von 1000 übersteigt
  for (summe = 0, i = 1; i <= 100; i = i + 1) {
    if (i % 7 == 0)
      continue;

    summe = summe + i;
    printf("%d\n", summe);

    if (summe > 1000)
      break;
  }

  return 0;
}