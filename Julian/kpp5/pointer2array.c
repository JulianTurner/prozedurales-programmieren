#include <stdio.h>

// ein Prigramm welches alle Buchstaben vor dem e ausgibt
#define WL 50

int main() {
  char wort[WL], ausgabe[WL];
  printf("Elijas möchte eine Aufforferung für die Eingabe:\n");
  fgets(wort, WL, stdin);
  int j = 0;

  for (int i = 0; wort[i]; i++) {
    if (i && wort[i] == 'e') {
      ausgabe[j] = wort[i - 1];
      j++;
    }
  }
  ausgabe[j] = 0;
  printf("%s", ausgabe);

  return 0;
}