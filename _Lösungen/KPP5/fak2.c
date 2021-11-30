#include <stdio.h>
#include <stdlib.h>

int fakultaet(int n) {
	if(n <= 1) {
	  return 1;
	}
	return n * fakultaet(n-1);
}

int main() {
	int i;

	printf("Bitte Zahl eingeben: ");
	scanf("%d", &i);
	printf("Die Fakultät von %i ist %i\n", i, fakultaet(i));
	return 0;
}
