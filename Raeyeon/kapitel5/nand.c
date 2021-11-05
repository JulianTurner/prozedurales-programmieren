#include<stdio.h>
int main(){

    int A, B, C, D, x;

    //A^B->CuD

    printf("A B C D\n");

    for(A=0; A<=1; A++){
        for(B=0; B<=1; B++){
            if(A=0 && B=0){
                for(C=0; C<=1; C++){
                    for(D=0; D<=1; D++){
                        printf("%d %d %d %d", A, B, C, D);
                        x = C||D;
                        printf("   %d\n",x);
                    }
                }
            }
        }
    }


    return 0;
}