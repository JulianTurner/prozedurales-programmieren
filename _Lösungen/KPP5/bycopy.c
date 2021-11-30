#include <stdio.h>
#include <stdlib.h>

void tuWas(int b) {
	printf("b: %u, ", b);
	b++;
	printf("b: %u, ", b);
}

int main() {
	int a = 1;

	printf("a: %u, ", a);
	tuWas(a);
	printf("a: %u\n", a);
	return 0;
}
// Ausgabe: a: 1, b: 1, b: 2, a: 1
