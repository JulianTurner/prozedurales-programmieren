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

  int zahl, max = 0, summe = 0, min = 0, i;

  for (int i = 0; i < anzahl; i++) {
    printf("%i von %i: ", i + 1, anzahl);
    scanf("%d", &zahl);
    printf("\n");

    if (!max || !min) {
      max = zahl;
      min = zahl;
    }

    if (zahl > max) {
      max = zahl;
    }

    if (zahl < min) {
      min = zahl;
    }

    summe += zahl;
  }
  printf("Die größte Zahl ist %d\n", max);
  printf("Die kleinste Zahl ist %d\n", min);
  printf("Der Durchschnitt ist %f\n", (float)summe / anzahl);

  return 0;
}