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
  // check if not 0
  if (jahr > 0) {
    // check if dividable by 4
    if (jahr % 4 == 0) {
      if (jahr % 100 == 0) {
        printf("durch 100 teilbar");
      } else if ((jahr % 100 == 0) && (jahr % 400 == 0))

    } else {
      printf("%d ist kein Schaltjahr", jahr);
    }
  } else {
    printf("Das Jahr müss großer 0 sein");
  }
  return 0;
}