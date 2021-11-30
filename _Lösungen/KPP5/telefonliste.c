#include <stdio.h>
#include <stdlib.h>

void chomp(char string[]) {
	int i;
	for (i = 0; string[i] != 0; i++);
	if(i > 0 && string[i-1] == '\n') {
		string[i-1]=0;
	}
}

void copystring(char src[], char dst[], int max) {
	int i;
	for (i=0; src[i] && i<max; i++) {
		dst[i] = src[i];
	}
	dst[i] = 0;
}

int main() {
	int anzahl;
	struct kommilitone {
		char name[30];
		char tel[25];
	};
	struct kommilitone *adressen;
	char buf[31]; // 1 Byte extra for CR

	printf("Wie viele Datensätze? ");
	fgets(buf, 31, stdin);
	anzahl = atoi(buf);
	adressen = malloc(anzahl * sizeof(struct kommilitone));

	for (int i=0; i<anzahl; i++) {
		printf("i: %i\n", i);

		printf("Name: ");
		fgets(buf, 31, stdin);
		chomp(buf);
		copystring(buf, adressen[i].name, 30); // Cut off 31st char

		printf("Tel: ");
		fgets(buf, 26, stdin);
		chomp(buf);
		copystring(buf, adressen[i].tel, 25); // Cut off 26st char
	}

	for (int i = 0; i<anzahl; i++) {
		printf("%-30s: %s\n", adressen[i].name, adressen[i].tel);
	}
	return 0;
}
