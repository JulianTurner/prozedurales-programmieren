#include <stdio.h>
#include <stdlib.h>
#define LEN 50

void chomp(char string[]) {
	int i;
	for(i = 0; string[i] != 0; i++);
	if(i > 0 && string[i-1] == '\n') {
		string[i-1]=0;
	}
}

int main() {
	char text[LEN];
	int i;
	fgets(text, LEN, stdin);
	chomp(text);
	for (i=0; text[i]; i++);
	printf("Laenge (%s): %i\n", text, i);
	return 0;
}
