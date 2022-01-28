#include <stdio.h>
#include <stdlib.h>

char *verknuepfe(char wort1[], char wort2[], char trz) {
  int wlen1;
  for (wlen1 = 0; wort1[wlen1]; wlen1++) {
    ;
  }

  int wlen2;
  for (wlen2 = 0; wort2[wlen2]; wlen2++) {
    ;
  }

  char *wort = (char *)malloc((wlen1 + wlen2 + 1) * sizeof(char));

  int wi;

  for (wi = 0; wi < wlen1; wi++) {
    wort[wi] = wort1[wi];
  }

  wort[wi] = trz;

  wi++;

  for (int i = 0; i < wlen2; i++) {
    wort[wi] = wort2[i];
    wi++;
  }

  wort[wi] = '\0';

  return wort;
}

int main() {
  char *wort;

  wort = verknuepfe("Butter", "Brot", '/');

  printf("%s\n", wort);

  free(wort);

  return 0;
}