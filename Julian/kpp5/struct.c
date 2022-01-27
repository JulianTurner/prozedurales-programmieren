#include <stdio.h>

struct student {
  char vorname[20];
  char nachname[30];
};

void chomp(char wort[]) {
  int wortlaenge;
  for (wortlaenge = 0; wort[wortlaenge]; wortlaenge++)
    ;

  if (wortlaenge && wort[wortlaenge - 1] == '\n') {
    wort[wortlaenge - 1] = 0;
  }
}

int main() {
  struct student studenten[3];

  for (int i = 0; i < 3; i++) {
    printf("Vorname eingeben vom %d Student: ", i + 1);
    fgets(studenten[i].vorname, 20,
          stdin); //  yafet\n => yafet, julian\n => julian
    chomp(studenten[i].vorname);
  }

  return 0;
}