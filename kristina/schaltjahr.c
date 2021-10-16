#include <stdio.h>
int main() {
  int num;
  printf("Willkommen beim Schaltjahr-Pruefer. Geben Sie die zu pruefende "
         "Jahreszahl ein (z.B. 2018):");
  scanf("%d", &num);
  if ((num % 4 == 0) && ((num % 100 != 0) || (num % 400 == 0))) {
    printf("%d ist ein Schaltjahr\n", num);
  } else {
    printf("%d ist kein Schaltjahr\n", num);
  }
}