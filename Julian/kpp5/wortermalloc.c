#include <stdio.h>
#include <stdlib.h>

#define WLEN 50

void chomp(char wort[]) {
  int len;
  for (len = 0; wort[len]; len++)
    ;
  if (len && wort[len - 1] == '\n') {
    wort[len - 1] = 0;
  }
}

int main() {
  char buffer[WLEN];
  char *worter[10];

  int i;

  for (i = 0; i < 10; i++) {
    printf("Wort %i von 10:\n", i + 1);
    fgets(buffer, WLEN, stdin);
    if (buffer[0] == '\n') {
      break;
    }
    chomp(buffer);

    int len;
    for (len = 0; buffer[len]; len++)
      ;

    worter[i] = (char *)malloc(sizeof(char) * len);

    for (len = 0; buffer[len]; len++) {
      worter[i][len] = buffer[len];
    }
    worter[i][len] = 0;
  }

  for (int j = 0; j < i; j++) {
    printf("Wort %i = %s\n", j + 1, worter[j]);
    free(worter[j]);
  }

  return 0;
}