#include <stdio.h>

int main() {
	int min, max, anz;

	printf("Wie viele Zeichen moechten Sie eingeben? ");
	scanf("%d", &anz);

	for(int i=0; i<anz; i++) {
		int z;
		printf("Bitte geben Sie Zahl %d ein: ", i);
		scanf("%d", &z);
		if(!i) { // erster Durchlauf
			min = max = z;
		} else {
			if(z < min) {
				min = z;
			}
			if(z > max) {
				max = z;
			}
		}
	}

	printf("MAX: %d\nMIN: %d\n", min, max);
	return 0;
}
