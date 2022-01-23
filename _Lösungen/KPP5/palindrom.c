#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORTLAENGE 100

int palindrom(char string[]) {
	int len, i;

	// Stringende finden
	for(len=0; string[len]; len++);

	// von links und rechts her nach innen wandern und vergleichen
	for(i=0; i<len/2; i++) {
		printf("vergleiche %c und %c\n", string[i], string[len-i-1]);
		if(string[i] != string[len-i-1]) return 0;
	}
	return 1;
}

void chomp(char string[]) {
	int i;
	for (i = 0; string[i] != 0; i++);
	if(i > 0 && string[i-1] == '\n') {
		string[i-1]=0;
	}
}

int main() {
	char wort[WORTLAENGE];
	printf("Bitte Wort eingeben: ");
	fgets(wort, WORTLAENGE, stdin);
	chomp(wort);

	if(palindrom(wort)==1) {
		printf( "Palindrom erkannt\n");
	} else {
		printf( "Kein Palindrom erkannt\n");
	}
	return 0;
}
