#include <stdio.h>

/*
Gebe mit Hilfe des Modulo Operators die letze Ziffer einer Ganzzahl zurück
*/
int main() {
  int zahl;

  printf("Dieses Programm gibt die letzte Zahl einer mehrstelligen Ganzzahl "
         "zurück\n");
  printf("Bitte die Zahl eingeben: ");
  scanf("%d", &zahl);

  if (zahl > 0) {
    printf("%d\n", zahl % 10);
  } else {
    printf("Die Zahl ist 0");
  }

  return 0;
}