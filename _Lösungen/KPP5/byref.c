#include <stdio.h>
#include <stdlib.h>

void umdrehen(int daten[], int anzahl) {
	int tmp;
	for (int i = 0; i < anzahl/2; i++) {
		printf("Tausche %i und %i\n", i, anzahl - i - 1);
		tmp = daten[i];
		daten[i] = daten[anzahl-i-1];
		daten[anzahl-i-1] = tmp;
	}
}

int main() {
	int daten[] = {7, 3, 9, 8, 2};
	umdrehen(daten, 5);
	for (int i = 0; i < 5; i++) {
		printf("Wert %i: %i\n", i, daten[i]);
	}
	return 0;
}
