#include <stdio.h>
#include <stdlib.h>

#define ANZAHL 3
#define VORNAME_LEN 20
#define NACHNAME_LEN 30

struct name_struc {
	char vorname[VORNAME_LEN];
	char nachname[NACHNAME_LEN];
};

/** Schneidet das letzte Zeichen eines Strings ab, falls es ein \n ist. */
void chomp(char string[]) {
	int i;
	for (i = 0; string[i] != 0; i++);
	if(i > 0 && string[i-1] == '\n') {
		string[i-1]=0;
	}
}

int main() {
	struct name_struc entries[ANZAHL];
	int i;

	for (int durchgang=0; durchgang<ANZAHL; durchgang++) {
		// Vorname einlesen
		printf("Vorname %d: ", durchgang +1 );
		fgets(entries[durchgang].vorname, VORNAME_LEN, stdin);
		chomp(entries[durchgang].vorname);

		// Name einlesen
		printf("Name %d: ", durchgang +1 );
		fgets(entries[durchgang].nachname, NACHNAME_LEN, stdin);
		chomp(entries[durchgang].nachname);

	}

	for(i=0; i<ANZAHL; i++) {
		int e_vn = 0, e_nn = 0;
		for(int j = 0; entries[i].vorname[j]; j++) {	// e in Vorname zählen
			if(entries[i].vorname[j] == 'e') {
				e_vn++;
			}
		}
		for(int j = 0; entries[i].nachname[j]; j++) {	// e in Nachname zählen
			if(entries[i].nachname[j] == 'e') {
				e_nn++;
			}
		}
		if(e_vn == e_nn) {
			printf("%s %s\n", entries[i].vorname, entries[i].nachname);
		}
	}

	return 0;
}
