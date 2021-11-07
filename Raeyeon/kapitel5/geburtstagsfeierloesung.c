#include<stdio.h>
int main(){
    int A, B, C, D;

    for(A=0; A<=1; A++){
        for(B=0; B<=1; B++){
            for(C=0; C<=1; C++){
                for(D=0; D<=1; D++){
                    if( (A||B||C||D) && !(A&&D) && (!B||C) && (!A||!C||!B) && (A||(D!=C)))
                        printf("%d %d %d %d\n", A, B, C, D);
                }
            }
        }
    }

    return 0;
}