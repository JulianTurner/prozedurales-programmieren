#include<stdio.h>
#include<math.h>
#define N 5

int factorial(int zahl);
double power(double basis, int exponent);

int main(){
    double x;
    double y, a;

    printf("x = ");
    scanf("%lf", &x);

    x = x*M_PI/180;

    a = sin(x);
    printf("a = %f\n", a);

    double ergebnis = 0.0;

    for(int i=0; i<=N; i++){
        int vorzeichen = power(-1, i);
        double zaehler = power(x, 2*i+1);
        double naenner = factorial(2*i+1);
        ergebnis += (double) vorzeichen * (zaehler / naenner);
    }

    printf("sin(x) = %f", ergebnis);

    return 0;
}

int factorial(int zahl){

    int ergebnis = zahl;

    for(int i=zahl-1; i>0; i--){
        ergebnis *= i;
    }

    return ergebnis;
}

double power(double basis, int exponent){

    double ergebnis = 1.0;

    for(int i=1; i<=exponent; i++){
        ergebnis *= basis;
    }

    return ergebnis;
}