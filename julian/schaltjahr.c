#include <stdio.h>

int main() {
  int jahr;

  printf("Dieses Programm gibt zurück ob sich das Jahr um ein Schlatjahr "
         "handelt.\n");
  printf("Bitte das Jahr eingeben: ");
  scanf("%d", &jahr);

  printf("%d", jahr);
  return 0;
}