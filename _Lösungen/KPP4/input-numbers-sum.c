#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, sum_pos=0, sum_neg=0, i, eingabe;
	printf("Wieviele Zahlen? ");
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		printf("Zahl %d: ", i);
		scanf("%d", &eingabe);
		if (eingabe < 0) {
			sum_neg += eingabe;
		} else {
			sum_pos += eingabe;
		}
	}
	printf("\nGesamtsumme positiv: %d\n", sum_pos);
	printf("Gesamtsumme negativ: %d\n", sum_neg);

	return 0;
}
