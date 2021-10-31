#include<stdio.h>

int main(){

    int a, b, c, i;

    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%d", &a);

    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &b);

    for(i=1; b<a; i++) {

        a -= b;

        for(i=1; b>a; i++) {

          if (a<b){
            b -= a;
          if (b==a){
            printf("ggT : %d", b);
        } if (b==a==1){
            printf("Die haben keinen ggT");
        } 

        }


        }

    }

        
    




    

    return 0;
}