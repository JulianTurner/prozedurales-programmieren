#include<stdio.h>

int main() {

    int sd=40, osr=160, sr=1000, i;

    i=1;

    while(sr>0){

        sd -= sd*20/100;   //ruhestand
        osr -= osr*20/100;
        sr -= sr*20/100;

        sd += osr*10/100;   //beförderung
        osr -= osr*10/100 - sr*20/100;
        sr -= sr*20/100;

        i++;

    }

    printf("%d Jahre", 3*i);

    return 0;
}