#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int jahr;

	printf("Bitte Zahl eingeben: ");
	scanf("%d", &jahr);

	printf("%d ist ", jahr);

	if (jahr % 400 == 0) { // durch 400  teilbar
		printf("ein");
	} else if (jahr % 100 == 0) { // durch 100  teilbar
		printf("kein");
	} else if (jahr % 4 == 0) { // durch 4 teilbar
		printf("ein");
	} else {
		printf("kein");
	}

	printf(" Schaltjahr!\n");

  return 0;
}
