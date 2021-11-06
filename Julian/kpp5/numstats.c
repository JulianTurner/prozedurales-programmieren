// ein Programm dass zunächst den Bentuzer fragt, wie viele Zahlen er eingeben
// möchte (max 5) und dann die Zahlen einliest.
// Anschließend wird die größte Zahl, die kleinste und der durchschnitt
// ausgegeben.

#include <stdio.h>

int main() {
  int anzahl = 0;

  while (anzahl < 1 || anzahl > 5) {
    printf("Es können zwischen 1 und 5 Zahlen eingeben werden.\n");
    printf("Wie viele Zahlen sollen einegeben werden?\n");
    scanf("%d", &anzahl);
  }

  int zahlen[anzahl], max = 0, summe = 0, min = 0, i;

  for (int i = 0; i < anzahl; i++) {
    printf("%i von 5: ", i + 1);
    scanf("%d", &zahlen[i]);
    printf("\n");

    if (!max || !min) {
      max = zahlen[i];
      min = zahlen[i];
    }

    if (zahlen[i] > max) {
      max = zahlen[i];
    }

    if (zahlen[i] < min) {
      min = zahlen[i];
    }

    summe += zahlen[i];
  }
  printf("Die größte Zahl ist %d\n", max);
  printf("Die kleinste Zahl ist %d\n", min);
  printf("Der Durchschnitt ist %d\n", summe / 5);

  return 0;
}