#include<stdio.h>

int main(){
    
    float kapital, zinse, ziel;
    int jahre;

    // ziel = kapital(1 + zinse)^jahre

    printf("Kapital: ");
    scanf("%f", &kapital);

    printf("Zinse: ");
    scanf("%f", &zinse);

    printf("Zielsumme: ");
    scanf("%f", &ziel);

    for(jahre=1 ; 0<jahre ; jahre++){

        kapital *= (1 + zinse/100.0);

        if(kapital>=ziel){

        printf("%d Jahre", jahre);

        break;
        
        }

    
    }


    return 0;
}