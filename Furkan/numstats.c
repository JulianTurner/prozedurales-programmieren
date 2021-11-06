#include <stdio.h>
    int main(){
        int zahl;

        printf("Wie viele Zahlen möchten Sie eingeben:");
        scanf("%d", &zahl); 

        while (zahl > 5){
            printf("Bitte geben Sie eine kleinere Zahl als 5 ein\n");
            scanf("%d", &zahl);
        }








    }