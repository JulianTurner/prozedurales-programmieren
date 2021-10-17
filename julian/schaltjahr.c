#include <stdio.h>

/*
Frage nach einer Jahreszahl und gebe aus ob es sich um ein Schaltjahr handelt
oder nicht.

Ist die Zahl durch 4 teilbar ist es ein Schaltjahr.
Wenn die Zahl durch 100 teilbar ist, ist es kein Schaltjahr.
Außer wenn die Zahl durch 400 teilbar ist.
*/
int main() {
  int jahr;

  printf("Dieses Programm gibt zurück ob sich das Jahr um ein Schlatjahr "
         "handelt.\n");
  printf("Bitte das Jahr eingeben: ");
  scanf("%d", &jahr);
  if (jahr > 0) {
  }
  return 0;
}