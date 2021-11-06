#include<stdio.h>

int main() {

    int sd=40, osr=160, sr=1000, i;

    i=1;

    while(i<=20){

        osr -= osr*10/100;   //beförderung
        sd += osr*10/100;
        sr -= sr*20/100;
        osr += sr*20/100;

        sd -= sd*20/100;   //ruhestand
        osr -= osr*20/100;

        sr = 1200 - sd - osr;

        i++;

    }

    printf("Jahre, Studiendirektoren, Oberstudienräte, Studienräte : %d, %d, %d, %d", 3*i, sd, osr, sr);

    return 0;
}