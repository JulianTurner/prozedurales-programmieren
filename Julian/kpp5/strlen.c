#include <stdio.h>

#define STRLEN 100

void chop(char string[]) {
  int i;
  for (i = 0; string[i]; i++)
    ;
  if (i > 0 && string[i - 1] == '\n') {
    string[i - 1] = 0;
  }
}

int main() {
  char string[STRLEN];
  int i;
  printf("Bitte einen string eingeben: ");
  fgets(string, STRLEN, stdin);

  chop(string);

  for (i = 0; string[i]; i++)
    ;
  printf("Die Zeichenfolge '%s' ist %d Zeichen lang\n", string, i);

  // end
  return 0;
}