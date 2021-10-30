#include<stdio.h>

int main(){

    int zahl;
    int i;

    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &zahl);

    if (zahl == 1){
        printf("1 ist keine Primzahl");
    }

   for (i=2; i<zahl; i++){

        if(zahl%i == 0){
            printf("%d ist keine Primzahl", zahl);
            break;
        }  
    }

    if(i==zahl) {
        printf("%d ist Primzahl.", zahl);
    }



    return 0;
}