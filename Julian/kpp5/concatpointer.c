#include <stdio.h>
#include <stdlib.h>

#define WLEN 50

int chomp(char wort[]) {
  int len;
  for (len = 0; wort[len]; len++)
    ;
  if (len && wort[len - 1] == '\n') {
    wort[--len] = 0;
  }

  return len;
}

int main() {
  char vorname[WLEN];
  char nachname[WLEN];

  printf("Vorname: ");
  fgets(vorname, WLEN, stdin);
  int vlen = chomp(vorname);
  printf("Nachname: ");
  fgets(nachname, WLEN, stdin);
  int nlen = chomp(nachname);

  char *name = (char *)malloc(sizeof(char) * (vlen + nlen));

  //   int nameI = 0;
  //   for (int i = 0; vorname[i]; i++) {
  //     name[nameI++] = vorname[i];
  //   }

  //   name[nameI++] = ' ';

  //   for (int i = 0; nachname[i]; i++) {
  //     name[nameI++] = nachname[i];
  //   }

  //   name[nameI] = 0;

  sprintf(name, "%s %s", vorname, nachname);

  printf("Name: %s\n", name);
  free(name);

  return 0;
}