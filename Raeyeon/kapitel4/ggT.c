#include<stdio.h> //kay helped, Struktogramm

int main(){

    int a, b;

    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%d", &a);
    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &b);


    while(a!=b){

        if(a>b){
            a -= b;
        }else{
            b-=a;
        }

    } 

    printf("ggT : %d", a);

}