#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LAENGE 10

/** Schneidet das letzte Zeichen eines Strings ab, falls es
  * ein \n ist. */
void chomp(char string[]) {
	int i;
	for (i = 0; string[i] != 0; i++);
	if(i > 0 && string[i-1] == '\n') {
		string[i-1]=0;
	}
}

int main() {
	char text[LAENGE];
	fgets(text, LAENGE, stdin);
	printf("Laenge (%s): %lu\n", text, strlen(text));
	chomp(text);
	printf("Laenge (%s): %lu\n", text, strlen(text));
	return 0;
}
