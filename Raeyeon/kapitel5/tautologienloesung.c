#include<stdio.h>

int main(){

    int A, B, C;
    int links, rechts;
    int ok;

    printf("A B C | links rechts\n");
    printf("------|-------------\n");

    ok =1;
    for(A=0; A<=1; A++){
        for(B=0; B<=1; B++){
            for(C=0; C<=1; C++){
                links = A&&(B||C);
                rechts = (A&&B)||(A&&C);
                printf("%d %d %d |   %d    %d\n", A, B, C, links, rechts);
                if(links != rechts)
                ok = 0;
            }
        }
    }
    if(ok)
        printf("Tautologie\n");
    else
        printf("keine Tautologie\n");

}