#include <stdio.h>
#include <stdlib.h>


/**
 * Stringlaenge ermitteln.
 */
int laenge(char *str) {
	int i;
	for(i=0; str[i]; i++);
	return i;
}

/**
 * zwei strings zusammenfügen
 */
char* zusammen(char *str1, char *str2) {
	int gesamtlaenge;
	char *target;
	int targetpos, sourcepos;

	gesamtlaenge = laenge(str1) + laenge(str2) + 2; // + ' ' + \0
	target = malloc(gesamtlaenge);

	// copy str1
	for(targetpos=0; str1[targetpos]; targetpos++) {
		target[targetpos] = str1[targetpos];
	}

	// space
	target[targetpos++] = ' ';

	// copy str2
	for(sourcepos=0; str2[sourcepos]; sourcepos++, targetpos++) {
		target[targetpos] = str2[sourcepos];
	}

	// Nullbyte
	target[targetpos] = 0;
	return target;
}



int main() {
	char test1[] = "Dieses Luftkissenboot";
	char test2[] = "ist voller Aale!";
	char *newString;

	newString = zusammen(test1, test2);
	printf("Zusammengefügt: %s\n", newString);
	free(newString);
	return 0;
}
