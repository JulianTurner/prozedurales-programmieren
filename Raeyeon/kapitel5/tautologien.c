#include<stdio.h>
int main(){
    int A, B, C, D, ok;

    printf("A B C D \n");

    int links = (A&&(B&&C)==(A&&B)&&C);
    int rechts = (A||(B||C)==(A||B)||C);

    for(A=0; A<=1; A++){
        for(B=0; B<=1; B++){
            for(C=0; C<=1; C++){
                for(D=0; D<=1; D++){
                    printf("%d %d %d %d   ",A, B, C, D);
                    printf("Assoziativgesetz : %d\n", links==rechts);
                    if(links!=rechts){
                        ok = 0;}
                }
            }
        }
    }

    if(ok == 0){
        printf("keine Tautologie");
    }else{
        printf("Tautologie");
    }

    return 0;
}