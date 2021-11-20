#include<stdio.h>

int main(){
    int ort1, ort2;
    int entfernung[5][5]={
        { 0, 2, 5,  9, 14},
        { 0, 0, 7, 15, 27},
        { 0, 0, 0,  9, 23},
        { 0, 0, 0,  0, 12},
        { 0, 0, 0,  0,  0}
    };

    printf("Bitte Geben Sie 2 Ortsnummern(1-5) ein : \n");
    scanf("%d %d", &ort1, &ort2);

    if(ort1<1 || ort2<1 || ort1>5 || ort2>5){
        printf("Bitte Geben Sie noch mal gültige 2 Ortsnummern(1-5) ein : \n");
        scanf("%d %d", &ort1, &ort2);
    }

    ort1=ort1-1;
    ort2=ort2-1;

    if(ort1>ort2){
        int x = ort2;
        ort2 = ort1;
        ort1 = x;
    }

    printf("Die Entfernung zwischen den beiden Orten : %d", entfernung[ort1][ort2]);


    return 0;
}