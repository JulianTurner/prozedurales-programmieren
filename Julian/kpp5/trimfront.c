#include <stdio.h>

// Implementieren Sie die hier fehlende Funktion,
// die jeden Whitespace(Leerzeichen, Tabulator(\t),
// Zeilenvorschub) am Anfang des
// übergebenen Strings entfernt. Verwenden Sie dafür keine weiteren Bibliotheken

#include <stdio.h>

void kuerze(char wort[]) {
  int whitespaces = 0;
  for (int i = 0; wort[i]; i++) {
    if (wort[i] == ' ' || wort[i] == '\t' || wort[i] == '\n') {
      whitespaces++;
    } else {
      break;
    }
  }

  int i;
  for (i = whitespaces; wort[i]; i++) {
    wort[i - whitespaces] = wort[i];
  }
  wort[i] = 0;
}

int main() {
  char text[] = "  Zu viel Platz  ";
  kuerze(text);
  printf("'%s'\n", text);
  return 0;
}
