#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, summe;
	summe = 0;
	for( i = 1; i <= 100; i = i + 1) {
		summe = summe + i;
	}

	return(0);
}
