#include <stdio.h>

int main() {
	int basis, exponent, ergebnis;

	printf("Bitte geben Sie die Basis ein: ");
	scanf("%d", &basis);
	printf("Bitte geben Sie den Exponenten ein: ");
	scanf("%d", &exponent);

	ergebnis = basis;
	for(int i=1; i<exponent; i++) {
		ergebnis *= basis;
	}

	printf("Das Ergebnis lautet %d\n", ergebnis);

	return 0;
}
