#include<stdio.h>
#include<math.h>
#define N 20

int main(){

    double x, y, a;

    printf("x = ");
    scanf("%lf\n", &x);

    a = sin(x);
    printf("a = %f\n", a);

    int j=-1;
    int k=-1;
    int b;

    for(int i=1; i<=N; i++){
        j *= k;
        for(int b=1; b<=2*i-1; b++){
            b *= b;
            x *= x;
        }
        y += (double) j * x * b;
    }
    printf("sin(x) = %f", y);


    return 0;
}