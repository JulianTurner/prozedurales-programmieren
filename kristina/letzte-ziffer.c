// Geben Sie mithilfe des Modulo-Operators %
// die letzte Ziffer einer vom Benutzer eingegebenen Ganzzahl aus.
#include <stdio.h>
int main() {
  int zahl1;
  printf("Pls input any number: ");
  scanf("%d", &zahl1); // bitte lies es
  printf("The last digit of your number is %d\n", zahl1 % 10);
  return 0; // Beende ohne Fehler}
// oder:
// if(zahl > 0){printf("%d\n", zahl%10);} else {printf("Die Zahl ist 0");}
