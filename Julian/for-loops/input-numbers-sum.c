#include <stdio.h>

int main() {
  // benutzer fragen wie viele Zahlen er eingeben möchte
  int anzahlEingaben, summe = 0;
  int zahlen[anzahlEingaben];
  printf("Wie viele Zahlen sollen summiert werden?\n");
  scanf("%d", &anzahlEingaben);
  printf("Es sollen %d Zahlen summiert werden.\n", anzahlEingaben);
  // zahlen eingeben
  for (int i = 1; i <= anzahlEingaben; i++) {
    int zahl;
    printf("\n%d: ", i);
    scanf("%d", &zahl);
    zahlen[i - 1] = zahl;
    summe += zahl;
  }
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