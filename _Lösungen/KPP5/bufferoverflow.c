#include <stdio.h>
#include <stdlib.h>

void verdoppeln(char ziel[], char quelle[]) {
	int i, j;
	for (i = 0; quelle[i] != 0; i++) {
		ziel[i] = quelle[i];
	}
	for (j = 0; quelle[j] != 0; j++) {
		ziel[j + i] = quelle[j];
	}
	ziel[j + i] = 0;
}

int main() {
	char name[10];
	verdoppeln(name, "Freude");
	printf("Ergebnis: %s\n", name);
	return 0;
}
