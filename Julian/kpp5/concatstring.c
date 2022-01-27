#include <stdio.h>

void chomp(char wort[]) {
  int len;
  for (len = 0; wort[len]; len++)
    ;
  if (wort[len - 1] = '\n') {
    wort[len - 1] = 0;
  }
}

int main() {
  char vorname[50];
  char nachname[50];
  char name[100];

  fgets(vorname, 50, stdin);
  fgets(nachname, 50, stdin);

  chomp(vorname);
  chomp(nachname);

  int namelen;

  for (namelen = 0; vorname[namelen]; namelen++) {
    name[namelen] = vorname[namelen];
  }

  name[namelen++] = 32;

  for (int i = 0; nachname[i]; i++) {
    name[namelen] = nachname[i];
    namelen++;
  }

  name[namelen++] = 0;

  printf("nachname %s\n", vorname);
  printf("vorname %s\n", nachname);
  printf("name %s\n", name);

  return 0;
}