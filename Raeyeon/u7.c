#include<stdio.h>

int main() {
    float zahl1, zahl2;

    while (1) {

    printf("Bitte geben Sie Zahl 1 ein; ");
    scanf("%f", &zahl1);
    printf("Bitte geben Sie Zahl 2 ein; ");
    scanf("%f", &zahl2);

    if(zahl1 == 0) {
        printf("0 eingegeben -> Abbruch\n");
        break;
    }
    
    printf("Die Summe lautet %f\n", zahl1 + zahl2);
    printf("Die Differenz lautet %f\n", zahl1 - zahl2);
    printf("Das Produkt lautet %f\n", zahl1 * zahl2);
    
    if(zahl2) {
        printf("Der Quotient lautet %f\n", zahl1 / zahl2);
        printf("Der Modulo lautet %d\n", (int)zahl1 % (int)zahl2);
    } else {
        printf("Diversion und Modulo sind bei 0 nicht erlaubt!\n");
    }
    }







    return 0;
}