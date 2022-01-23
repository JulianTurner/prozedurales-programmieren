#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	struct student {
		char first[30];
		char last[40];
		long matrikelnr;
	};
	struct student student1;

	strcpy(student1.first, "Erika");
	strcpy(student1.last, "Mustermann");
	student1.matrikelnr = 123456;
	printf("Student %s %s (%li)\n",
				 student1.first, student1.last, student1.matrikelnr);
	return 0;
}
