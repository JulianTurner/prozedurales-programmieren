#include<stdio.h>
#include<math.h>

int main (){

    int i, j;
    double x, y, z, a, b, c;

    printf("x = ");
    scanf("%lf", &x);

    y = x;
    z = x;

    a = sin(x);
    b = cos(x);
    c = exp(x);

    printf("%f, %f, %f\n", a, b, c);

    //sin(x)

    for(i=0; i<=20; i++){

        j = i;
        if(i==0){
        i=1;
        }if(i>0){
        i *= (2*i+1);
        }
        x += pow(-1,j)*pow(x, 2*j+1)/i; 
        

    }  printf("sin(x) = %lf\n", x);

    //cos(x)

    for(i=0; i<=20; i++){

        j = i;
        if(i==0){
        i=1;
        }if(i>0){
        i *= (2*i);
        }
        y += pow(-1,j)*pow(y, 2*j)/i;
        

    }printf("cos(x) = %lf\n", y);

    //e^(x)

    for(i=0; i<=20; i++){

        j = i;
        if(i==0){
        i=1;
        }if(i>0){
        i *= i;
        }
        z += pow(z, j)/i; 
        

    }printf("e^(x) = %lf", z);


    return 0;
}