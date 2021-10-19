#include <stdio.h>
#include <string.h>

int q1(char symbol) {
  if (symbol == 'a') {
    return 1;
  }
  if (symbol == 'b') {
    return 2;
  }
  return 0;
}

int q2(char symbol) {
  if (symbol == 'a') {
    return 2;
  }
  if (symbol == 'b') {
    return 3;
  }
  return 0;
}

int q3(char symbol) {
  if (symbol == 'a') {
    return 2;
  }
  if (symbol == 'b') {
    return 3;
  }
  return 0;
}

int main() {
  // stores the word
  char word[256] = "";
  // dfaState 0 is not accepting, 3 is accepting
  int dfaState = 1;
  printf("Die Sprache:    L = { w ϵ Σ* | w endet mit b & |w| >= 2}\n");
  printf("Das Aplhabet:   Σ = { a, b,}\n");
  printf("Bitte das zu prüfende Wort eingeben:\n");
  // get the word
  scanf("%s", word);

  // check each char
  for (int i = 0; i < strlen(word); i++) {

    if (dfaState == 1) {
      dfaState = q1(word[i]);
    }
    if (dfaState == 2) {
      dfaState = q2(word[i]);
    }
    if (dfaState == 3) {
      dfaState = q3(word[i]);
    }
  }

  if (dfaState == 3) {
    printf("Das Wort %s ist in der Sprache enthalten\n", word);
  } else {
    printf("Das Wort %s ist nicht der Sprache enthalten\n", word);
  }

  // End
  return 0;
}
