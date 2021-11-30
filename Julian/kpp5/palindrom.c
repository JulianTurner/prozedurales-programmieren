#include <stdio.h>
// rentner, lagerregal
#define STRLEN 100

void chop(char string[]) {
  int i;

  for (i = 0; string[i]; i++)
    ;
  if (i > 0 && string[i - 1] == '\n') {
    string[i - 1] = 0;
  }
}

int isPalindrom(char string[]) {
  int i, j;

  for (i = 0; string[i]; i++)
    ;

  for (j = 0; i; j++, i--) {
    // ! -1 da Arrays bei 0 starten
    if (string[j] != string[i - 1]) {
      return 0;
    }
  }

  return 1;
}

int main() {
  char string[STRLEN];
  int i;
  printf("Bitte einen string eingeben um auf ein Palindrom zu prüfen: ");
  fgets(string, STRLEN, stdin);

  chop(string);

  printf(isPalindrom(string) ? "Das Wort %s ist ein Palindrom.\n"
                             : "Das Wort %s ist kein Palindrom\n",
         string);

  // end
  return 0;
}