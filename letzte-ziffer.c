#include <stdio.h>

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