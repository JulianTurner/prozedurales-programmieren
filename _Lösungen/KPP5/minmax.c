#include <stdio.h>
#include <stdlib.h>

void minmax( int anz, int daten[], int *min, int *max) {
	int i;
	*min = daten[0]; *max = daten[0];
	for( i = 1; i < anz; i++) {
    if( daten[i] < *min) {
    	*min = daten[i];
		}
    if( daten[i] > *max) {
			*max = daten[i];
		}
	}
}

int main() {
	int zahlen[10] = {1, -12, 31, 17, -11, 0, 22, 9, 4, -7};
	int min, max;
  minmax( 10, zahlen, &min, &max);
	printf( "Min/Max: %d/%d\n", min, max);
	return 0;
}
