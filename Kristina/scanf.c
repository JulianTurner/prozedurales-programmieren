//Funktion scanf()
#include <stdio.h>
int main() {
  int zahl1, zahl2;
  printf("Bitte geben Sie zwei Zahlen ein: ");
  scanf("%d %d", &zahl1, &zahl2);
  printf("Sie haben %d und %d eingegeben\n", zahl1, zahl2);
  return 0; // Beende ohne Fehler
}
