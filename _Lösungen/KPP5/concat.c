#include <stdio.h>
#include <stdlib.h>

int main() {
	char vorname[] = "Erika";
	char nachname[] = "Mustermann";
	char target[100]; // genug Platz!
	int i, j;

	// Vorname
	for(i = 0; vorname[i] != 0; i++) {
		target[i] = vorname[i];
	}

	// Leerzeichen
	target[i++] = ' ';

	// Nachname
	for(j = 0; nachname[j] != 0; j++) {
		target[i+j] = nachname[j];
	}

	target[i+j] = 0; // 0 als Abschluss

	printf("Concat: %s\n", target); // "Erika Mustermann"

	return 0;
}
