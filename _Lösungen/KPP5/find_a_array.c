#include <stdio.h>
#include <stdlib.h>

int zaehle(char string[]) {
	int i, a;
	for(i=0, a=0; string[i] != 0; i++) {
		if(string[i] == 'a') {
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
