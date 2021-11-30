#include <stdio.h>

int main() {
    unsigned int anzahl;
    int zahlen[5];

    // Anzahl erfassen
    while(1) {
        printf("Wie viele Zahlen moechten Sie eingeben (max 5)? ");
        scanf("%d", &anzahl);

        if (anzahl >0 && anzahl < 6) {
            break;
        }
        printf("Bitte geben sie eine Zahl zwischen 1 und 5 ein!\n");
    };

    // Eingabe der Zahlen
    for(int i = 0; i < anzahl; i++) {
        print("Bitte geben Sie die Zahl %d ein: ", i + 1);
        scanf("%d", &zahlen[i]);
    }

    // Berechnung
    int min, max;
    int summe = 0;
    float durchschnitt;
    for(int i = 0; i < anzahl; i++) {
        summe += zahlen[i];
        
        if (i == 0) {
            // Erster Durchlauf
            min = zahlen[i];
            max = zahlen[i];
        } else {
            // Weitere Durchläufe
            if (zahlen[i] < min) {
               min = zahlen[i];
            }
            if (zahlen[i] > max) {
               max = zahlen[i];
            }
        }
    }

    durchschnitt = (float) summe / anzahl;
    printf("Min ist %d, Max ist %d, Durchschnitt ist %f\n", 
        min, max, durchschnitt);

    return 0;
}