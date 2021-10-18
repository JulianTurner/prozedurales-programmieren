/*
Erstelle einen DEA der ein Wort überprüft.
Gegeben ist:
Das Aplhabet:   Σ = { a, b,}
Die Sprache:    L = { w ϵ Σ* | w enthält min 1 a}
*/

#include <stdio.h>
#include <string.h>

int main() {
  char word[256] = "";
  // get the word
  printf("Bitt das zu prüfende Wort eingeben:\n");
  scanf("%s", word);
  int i;
  int dfa = 0;

  for (i = 0; i < strlen(word); i++) {
    if (word[i] == 'a') {
      dfa = 1;
      break;
    }
  }

  if (dfa == 1) {
    printf("Das Wort %s ist in der Sprache enthalten\n", word);
  } else {
    printf("Das Wort %s ist nicht der Sprache enthalten\n", word);
  }

  // End
  return 0;
}
