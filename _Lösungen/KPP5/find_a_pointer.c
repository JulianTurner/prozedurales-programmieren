#include <stdio.h>
#include <stdlib.h>

int zaehle(char *string) {
	int a;
	for(a=0; *string != 0; string++) {
		if(*string == 'a') {
			a++;
		}
	}
	return a;
}

int main() {
	int anz = zaehle( "Panamakanalaal");
	printf( "%d a gefunden\n", anz);
	return 0;
}
