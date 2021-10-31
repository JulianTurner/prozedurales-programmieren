#include<stdio.h>

int main(){

    int a, b, i;

    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%d", &a);
    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &b);

    i = 1;

    if(a>b){

    while(a>b){
        a -= b;
        i++;

        while (a<b){
        b -= a;
        i++;
        }
    } 
    } else {

    while (a<b){
        b -= a;
        i++;

        while(a>b){
        a -= b;
        i++;
        }
    }

    }

    if(a==b!=1){
        printf("ggT : %d",a);
    }
    if(a==b==1){
        printf("kein ggT");
    }



    return 0;
}