#include <stdio.h>

int main() {
  int zahl1 = 0, zahl2 = 0;

  do {
    // ein Prgramm das zwei zahlen einliest
    printf("\nBitte 2 Zahlen eingeben:\n");
    printf("1 von 2 :");
    scanf("%d", &zahl1);
    // Abbruch bei der 0
    if (zahl1 == 0) {
      break;
    }

    printf("\n2 von 2 :");
    scanf(" %d", &zahl2);

    // Ausgabe

    // Summe
    printf("Summe: %d + %d = %d\n", zahl1, zahl2, zahl1 + zahl2);
    // Produkt
    printf("Produkt: %d * %d = %d\n", zahl1, zahl2, zahl1 * zahl2);
    // Differenz
    printf("Differenz: %d - %d = %d\n", zahl1, zahl2, zahl1 - zahl2);
    if (zahl2 == 0) {
      // Quotient
      printf("Durch 0 teilen ist nicht möglich\n");
      // Divisionsrest
      printf("Modulo mit 0 ist nicht möglich\n");

    } else {
      // Quotient
      printf("Quotient: %d / %d = %f\n", zahl1, zahl2, (float)zahl1 / zahl2);
      // Divisionsrest
      int modulo = zahl1 % zahl2;
      printf("Modulo: %d %%  %d = %d\n", zahl1, zahl2, modulo);
    }
  }
  // Im Loop bis die 0 als erste zahl eingegeben wird
  while (zahl1 > 0 || zahl1 < 0);

  // Hinweis
  printf("Das Programm wurde beendet da als erste Zahl die 0 eingegeben wurde");
  //
  return 0;
}