#include<stdio.h>
#include<math.h>


/*Ich würde
- das ungenutzte g aus dem Programm werfen
- die Deklaration von i erst im for Schleifenkopf vornehmen (wo du i=1 setzt)
- die Deklaration von a in der gleichen Zeile in der du a das erste Mal verwendest vornehmen (double a = sin(x);)*/



int main(){

    int i, g;
    double x;

    printf("x = ");
    scanf("%lf\n", &x);

//sin(x) check
    double a = sin(x);
    printf("a = %f\n", a);

//taylorentwicklung

    i = 1;
    for(i=1; i<10 ; i++){
        int n = 2*i-1;
        for(int j=1; j<=n; j++){
            j *= j;
            x *= (double) pow(-1,i+1) * pow(x,2*i-1) / j;
        }
    }

    printf("sin(x) = %f", x);


    return 0;
}