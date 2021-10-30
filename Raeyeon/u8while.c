#include<stdio.h>

int main() {
    int grenze1, grenze2;

    printf("Bitte geben Sie Grenze 1 ein; ");
    scanf("%d", &grenze1);
    printf("Bitte geben Sie Grenze 2 ein; ");
    scanf("%d", &grenze2);

    int i = grenze1;

    while (i<=grenze2) { 

        if(i%7 == 0) {
            printf("%d\n", i);
        }

        i++;

    }

    return 0;
}