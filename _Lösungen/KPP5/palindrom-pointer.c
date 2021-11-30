#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORTLAENGE 100

int palindrom(char *string) {
	char *vorn = string;
	char *hinten = string;

	// Ans Stringende positionieren
	while(*hinten != 0) hinten++;
	hinten--;

	// von links und rechts her nach innen wandern und vergleichen
	for( ; vorn < hinten; vorn++, hinten--) {
		if(*vorn != *hinten) return 0;
	}
	return 1;
}

void chomp(char *str) {
   unsigned p=strlen(str);
   str[p-1]='\0';
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
