#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	struct student {
		char first[30];
		char last[40];
		long matrikelnr;
	};
	int n;
	struct student *studenten;

	printf("Wieviele Studenten (mindestens 43)? ");
	scanf("%d", &n);
	studenten = malloc(n * sizeof(struct student));

	strcpy(studenten[42].first, "Erika");
	strcpy(studenten[42].last, "Mustermann");
	studenten[42].matrikelnr = 123456;
	printf("Student 43: %s %s (%li)\n",
				 studenten[42].first,
				 studenten[42].last,
				 studenten[42].matrikelnr);
	free(studenten);
	return 0;
}
