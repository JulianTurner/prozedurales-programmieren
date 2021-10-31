#include<stdio.h>

int main(){

    int z, s;

    printf("         1   2   3   4   5   6   7   8   9  10\n");
    printf("-----------------------------------------------\n");

    for(z=1; z<=10; z++){
        printf("%3d  |", z);
        for(s =1; s<=10; s++){
            printf("%4d", z*s);
        }

        printf("\n");


    }

    printf("-----------------------------------------------\n");



return 0;

}
