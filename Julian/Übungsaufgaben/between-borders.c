#include <stdio.h>

int main() {
  int zahl1 = 0, zahl2 = 0;

  printf("Ein Programm, das alle durch 7 teilbaren Zahlen zwischen zwei zuvor "
         "eingegeben Grenzen ausgibt.");

  // eingabe zahl 1
  printf("\nBitte 2 Zahlen eingeben:\n");
  printf("1 von 2 :");
  scanf("%d", &zahl1);
  // Abbruch bei der 0
  if (zahl1 == 0) {
    printf("Die Zahl muss größer 0 sein.");
  }

  // eingabe zahl 2
  printf("\n2 von 2 :");
  scanf(" %d", &zahl2);
  // Abbruch bei der 0
  if (zahl2 == 0) {
    printf("Die Zahl muss größer 0 sein.");
  }
  // kleinere Zahl kommt zuerst zum hochzählen
  int temp = 0;
  if (zahl1 > zahl2) {
    temp = zahl1;
    zahl1 = zahl2;
    zahl2 = temp;
  }

  int none = 0;
  // alle durch 7 teilbaren Zahlen ausgeben
  for (zahl1; zahl1 <= zahl2; zahl1++) {
    if (zahl1 % 7 == 0) {
      printf("\n%d\n", zahl1);
      none = 1;
    }
  }

  // check if any
  if (!none) {
    printf("Es wurde keine Zahl gefunden.\n");
  }

  // Hinweiß
  printf("Das Programm ist beendet.\n");
  return 0;
}