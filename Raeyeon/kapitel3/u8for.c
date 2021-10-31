#include<stdio.h>

int main() {
    int grenze1, grenze2;
    int i;

    printf("Bitte geben Sie Grenze 1 ein; ");
    scanf("%d", &grenze1);
    printf("Bitte geben Sie Grenze 2 ein; ");
    scanf("%d", &grenze2);


    for (i = grenze1 ; i <= grenze2; i++) { 

        if(i%7 == 0) {
            printf("%d ist durch 7 teilbar.\n", i);
        }

    }

    return 0;
}