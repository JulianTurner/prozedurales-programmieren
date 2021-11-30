#include <stdio.h>

int main() {
	int ziffer;

	printf("Bitte geben Sie ein Ziffern ein: ");
	scanf("%d", &ziffer);
	printf("Die letzte Ziffer lautet %d\n", ziffer % 10);

	return 0;
}
