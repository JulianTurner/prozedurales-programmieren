#include <stdio.h>
#include <stdlib.h>

int zaehler = 0;

void tu_was() {
	zaehler += 10;
}

int main() {
	zaehler++;
	tu_was();
	printf("Zaehler: %i\n", zaehler); // Zaehler: 11
	return 0;
}
