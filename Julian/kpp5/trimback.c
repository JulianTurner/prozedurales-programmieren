#include <stdio.h>

// Implementieren Sie die hier fehlende Funktion,
// die jeden Whitespace(Leerzeichen, Tabulator(\t),
// Zeilenvorschub) am Ende des
// übergebenen Strings entfernt. Verwenden Sie dafür keine weiteren Bibliotheken

void kuerze(char wort[]);

int main() {
  char text[] = "  Zu viel Platz  ";
  kuerze(text);
  printf("'%s'\n", text);
  return 0;
}

void kuerze(char wort[]) {
  int wortlange;
  for (wortlange = 0; wort[wortlange]; wortlange++)
    ;

  for (wortlange--; wortlange >= 0; wortlange--) {
    if (wort[wortlange] == ' ' || wort[wortlange] == '\t' ||
        wort[wortlange] == '\n') {
      wort[wortlange] = 0;
    } else {
      break;
    }
  }
}