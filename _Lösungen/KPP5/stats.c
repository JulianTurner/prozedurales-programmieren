#include <stdio.h>
#define BUF_LEN 1000
#define STAT_LEN 256

/**
 * Schneidet das letzte Zeichen eines Strings ab, falls es
 * ein \n ist. */
void chomp(char string[]) {
    int i;
    for (i = 0; string[i] != 0; i++)
        ;
    if (i > 0 && string[i - 1] == '\n') {
        string[i - 1] = 0;
    }
}

int main() {
    char text[BUF_LEN];
    int stat[STAT_LEN];

    // Eingabe
    printf("Bitte geben Sie einen Text ein (max. %d Zeichen):\n", BUF_LEN);
    fgets(text, BUF_LEN, stdin);
    chomp(text);

    // Statistik initialisieren
    for(int i=0; i<STAT_LEN; i++) {
        stat[i] = 0;
    }

    printf("Gut, dann mache ich eine Statistik fuer '%s'\n", text);

    // Statistik durchfuehren
    for(int i=0; text[i]; i++) {
        stat[text[i]]++;
    }

    // Ausgabe
    for(int i=0; i<STAT_LEN; i++) {
        if (!stat[i]) { // stat[i] == 0
            continue;
        }
        printf("%c (%d)\n", i, stat[i]);
    }

    return 0;
}
