#include <stdio.h>
#define ANZ 5

int main() {
    int entfernung[ANZ][ANZ] = {
        {0, 2, 5, 9, 14},
        {0, 0, 7, 15, 27},
        {0, 0, 0, 9, 23},
        {0, 0, 0, 0, 12},
        {0, 0, 0, 0, 0}
    };
    int ort1, ort2;
    int dist;

    // Frage nach Ort 1
    do {
        printf("Bitte geben Sie die Nummer des Startorts ein (1-%d): ", ANZ);
        scanf("%d", &ort1);
        if (ort1 > 0 && ort1 <= ANZ) {
            break;
        }
        printf("Zahl muss zwischen 1 und %d liegen!\n", ANZ);
    } while(1);

    // Frage nach Ort 2
        do {
        printf("Bitte geben Sie die Nummer des Zielorts ein (1-%d): ", ANZ);
        scanf("%d", &ort2);
        if (ort2 > 0 && ort2 <= ANZ) {
            break;
        }
        printf("Zahl muss zwischen 1 und %d liegen!\n", ANZ);
    } while(1);

    // Berechnung & Ausgabe
    dist = entfernung[ort1-1][ort2-1] + entfernung[ort2-1][ort1-1];
    printf("\nDie Entfernung von Ort %d nach Ort %d betraegt %d km.\n",
        ort1, ort2, dist);

    return 0;
}