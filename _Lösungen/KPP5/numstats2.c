#include <stdio.h>

int main() {
  unsigned int anzahl;
  int min, max;
  int summe = 0;

  // Anzahl erfassen
  while (1) {
    printf("Wie viele Zahlen moechten Sie eingeben (max 5)? ");
    scanf("%d", &anzahl);

    if (anzahl > 0 && anzahl < 6) {
      break;
    }
    printf("Bitte geben sie eine Zahl zwischen 1 und 5 ein!\n");
  };

  // Eingabe der Zahlen
  for (int i = 0; i < anzahl; i++) {
		int eingabe;
    printf("Bitte geben Sie die Zahl %d ein: ", i + 1);
    scanf("%d", &eingabe);

    if (i == 0) {
      // Erster Durchlauf3
      min = eingabe;
      max = eingabe;
    } else {
      // Weitere Durchläufe
      if (eingabe< min) {
        min = eingabe;
      }
      if (eingabe > max) {
        max = eingabe;
      }
    }
		summe += eingabe;
  }

  // Berechnung
	float durchschnitt = (float)summe / anzahl;
  printf("Min ist %d, Max ist %d, Durchschnitt ist %f\n", min, max,
         durchschnitt);

  return 0;
}
