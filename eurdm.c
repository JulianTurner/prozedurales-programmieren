#include <stdio.h>

int main() {
  int eur;
  float wechselkurs = 1.95583;
  float dm;

  printf("Dieses Programm rechnet EUR in DM aus\n");
  printf("Bitte die EUR eingeben: ");
  scanf("%d", &eur);

  if (eur > 0) {
    printf("Das wären %f DM\n", eur * wechselkurs);
  } else {
    printf("0 = 0");
  }

  return 0;
}