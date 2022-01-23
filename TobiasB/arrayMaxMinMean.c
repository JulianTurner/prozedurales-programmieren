#include <stdio.h>

int main ()  {
    int inputAnzahl;
    int inputArray[5];
    int i = 0;

    int max;
    int min;
    float mean = 0.0;

    while(1) {
        printf("Wieviele Zahlen möchten Sie eingeben? Max. 5 ");
        scanf("%d", &inputAnzahl);

        if (inputAnzahl < 6 && inputAnzahl > 0) {
            break;
        }
    }

    printf("Anzahl der Eingaben: %d \n", inputAnzahl);

    for (i; i < inputAnzahl; i++) {
        // Eingabe Zahl
        printf("Bitte eine Zahl eingeben: ");
        scanf("%d", &inputArray[i]);
        printf("Eingegebene Zahl: %d \n", inputArray[i]);

        if (i == 0) {
            max = inputArray[i];
            min = inputArray[i];
        }

        if (inputArray[i] > max) {
            max = inputArray[i];
        }
        if (inputArray[i] < min) {
            min = inputArray[i];
        }
        mean += inputArray[i];
    }
 
    // Ausgabe
    printf("Max: %d \n", max);
    printf("Min: %d \n", min);
    printf("Mean: %f \n", mean/inputAnzahl);

    return 0;
}
