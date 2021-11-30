#include <stdio.h>


int main() {
	int betrag;

	printf("Bitte geben Sie den Betrag in EUR ein: ");
	scanf("%d", &betrag);
	printf("%d EUR entsprechen %f DM\n", betrag * 1.95583);
	return 0;
}
