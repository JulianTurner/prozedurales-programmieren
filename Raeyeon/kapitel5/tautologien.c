#include<stdio.h>
int main(){
    int A, B, C, D;

    printf("A B C D \n");

    for(A=0; A<=1; A++){
        for(B=0; B<=1; B++){
            for(C=0; C<=1; C++){
                for(D=0; D<=1; D++){
                    printf("%d %d %d %d   ",A, B, C, D);
                    printf("Assoziativgesetz : %d\n", (A&&(B&&C)==(A&&B)&&C)==(A||(B||C)==(A||B)||C));
                    printf("          Kommutativgesetz : %d\n", (A&&B==B&&A)==(A||B==B||A));
                }
            }
        }
    }

    return 0;
}