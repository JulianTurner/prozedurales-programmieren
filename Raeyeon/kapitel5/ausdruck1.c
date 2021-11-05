#include<stdio.h>
int main(){

    int A, B, C, D;

    //A^B->CuD

    /*for(A=0; A<=1; A++){
        for(B=0; B<=1; B++){
            if(A&&B){
                for(C=0; C<=1; C++){
                    for(D=0; D<=1; D++){
                        printf("A, B, C, D :%d %d %d %d\n",A, B, C, D);
                        printf("Ausdruck : %d\n", C||D);
                    }
                }
            }
        }
    }*/

    printf("A B C D Ausdruck\n");

    for(A=0; A<=1; A++){
        for(B=0; B<=1; B++){
            for(C=0; C<=1; C++){
                for(D=0; D<=1; D++){
                    printf("%d %d %d %d     ",A, B, C, D);
                    printf("%d\n", !(A&&B)||(C||D));
                }
            }
        }
    }


    return 0;
}