#include <stdio.h>

int main() {
	float kapital, zielsumme, zinssatz, summe;
	int jahr;

	printf("Bitte geben Sie das Startkapital ein: ");
	scanf("%f", &kapital);
	printf("Bitte geben Sie den Zinssatz in Prozent ein: ");
	scanf("%f", &zinssatz);
	printf("Bitte geben Sie die Zielsumme ein: ");
	scanf("%f", &zielsumme);

	for(summe=kapital, jahr = 0; summe<zielsumme; jahr++, summe += summe*zinssatz/100);

	printf("Die Zielsumme von %f wird nach %d Jahren erreicht.\n", zielsumme, jahr);
	return 0;
}
