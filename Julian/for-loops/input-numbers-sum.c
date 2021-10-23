#include <stdio.h>

int main() {
  // benutzer fragen wie viele Zahlen er eingeben möchte
  int anzahlEingaben, summe = 0, summePositiv = 0, summeNegativ = 0;
  int zahlen[anzahlEingaben];
  printf("Wie viele Zahlen sollen summiert werden?\n");
  scanf("%d", &anzahlEingaben);
  printf("Es sollen %d Zahlen summiert werden.\n", anzahlEingaben);
  // zahlen eingeben
  for (int i = 1; i <= anzahlEingaben; i++) {
    int zahl;
    printf("\n%d von %d: ", i, anzahlEingaben);
    scanf("%d", &zahl);
    zahlen[i - 1] = zahl;
    summe += zahl;
    if (zahl > 0) {
      summePositiv += zahl;
    }
    if (zahl < 0) {
      summeNegativ += zahl;
    }
  }
  printf("\nDie Summe aller positiven Zahlen ergibt: %d\n", summePositiv);
  printf("\nDie Summe aller negativen Zahlen ergibt: %d\n", summeNegativ);

  // BONUS
  // summe ausgeben
  printf("\nDie Summe der Zahlen ");
  // zahlen ausgeben
  for (int i = 0; i < anzahlEingaben; i++) {
    printf("( %d )", zahlen[i]);
    if (1 + i < anzahlEingaben) {
      printf(" + ");
    }
  }
  printf(" ergibt: %d\n", summe);

  return 0;
}