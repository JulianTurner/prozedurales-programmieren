#include <stdio.h>
#include <stdlib.h>

int fakultaet(int n) {
	int f;
	for(f = 1; n > 1; n--) {
    f = f * n;
	}
	return f;
}

int main() {
	int i;

	printf("Bitte Zahl eingeben: ");
	scanf("%d", &i);
	printf("Die Fakultät von %i ist %i\n", i, fakultaet(i));
	return 0;
}
