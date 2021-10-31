#include<stdio.h>

int main(){

    int i, basis, exponent, c;

    printf("Bitte geben Sie eine Basis ein : ");
    scanf("%d", &basis);
    printf("Bitte geben Sie einen Exponent ein : ");
    scanf("%d", &exponent);

    for(i=1,c=1; i<=exponent; i++){

        c *= basis;
       
    }

    printf("C = %d",c);


    return 0;

}