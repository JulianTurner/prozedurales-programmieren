#include<stdio.h>
#include<math.h>

int main(){

    int i, g;
    double x, a;

    a = sin(x);

    printf("x = ");
    scanf("%lf\n", &x);

    printf("a = %f\n", a);

    for(i=1; i<10 ; i++){

        g *= 2*i-1;  
        x *= (double) pow(-1,i+1) * pow(x,2*i-1) / g;

    }

    printf("sin(x) = %f", x);


    return 0;
}