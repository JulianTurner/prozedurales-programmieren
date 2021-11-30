#include <stdio.h>
#include <stdlib.h>
#define LEN 50

int main() {
	char buf[LEN];
	printf("Eingabe: ");
	fgets(buf, LEN, stdin);

	for(int i=0; buf[i]; i++) {
		if (buf[i] == 'e') {
			// Alle Zeichen von rechts um 1 nach links kopieren
			for(int j=i+1; buf[j]; j++) {
				buf[j-1] = buf[j];
			}
		}
	}
	printf("Ergebnis: %s\n", buf);
	return 0;
}
