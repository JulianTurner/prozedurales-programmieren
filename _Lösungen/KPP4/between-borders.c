#include <stdio.h>

int main() {
	int untergrenze, obergrenze;
	printf("Bitte geben Sie die Untergrenze ein: ");
	scanf("%d", &untergrenze);
	printf("Bitte geben Sie die Obergrenze ein: ");
	scanf("%d", &obergrenze);

	for (int i=untergrenze; i <= obergrenze; i++) {
		if((i % 7) == 0) {
			printf("%d ist durch 7 teilbar!\n", i);
		}
	}
	return 0;
}
