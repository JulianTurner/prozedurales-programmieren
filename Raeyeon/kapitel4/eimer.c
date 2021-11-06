#include<stdio.h>

int main(){

    float x, y, a, b;
    int n, i;

    printf("(x, y, a, b, n)\n");
    scanf("%f %f %f %f %d", &x, &y, &a, &b, &n);

    for(i=1; i<=n; i++){

        y += x*a/100.0;
        x -= x*a/100.0;
        x += y*b/100.0;
        y -= x*b/100.0;

       
    }

    printf("(%f, %f, %f, %f, %d)", x, y, a, b, n);




    return 0;
}