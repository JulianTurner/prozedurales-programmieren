#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 100
#define MAX_WORDS 10

int main() {
	char buf[BUF_SIZE];													 	 // Eingabe
	char *words[MAX_WORDS];												 // Wortspeicher
	int i, n=0;

	do {
		int laenge = 1;														   // mindestens ein \n
		printf("Wort %d eingeben: ", n+1);
		fgets(buf, BUF_SIZE, stdin); 							   // Eingabe
		while(buf[laenge]!=0) laenge++; 					   // Ende finden
		buf[--laenge] = 0;                           // entferne \n am Ende
		if (laenge==0) break; 										   // Leereingabe beendet
		words[n] = malloc(laenge * sizeof(char)); 	 // Speicher anfordern
		for(i=0; buf[i]!=0; i++) words[n][i]=buf[i]; // Buffer kopieren
		words[n][i] = 0;
		n++;
	} while(n < MAX_WORDS);

	for(i=0; i<n; i++) {
		printf("Wort %i: %s\n", i+1, words[i]);					// Ausgeben
		free(words[i]);																// Speicher freigeben
	}

	return 0;
}
