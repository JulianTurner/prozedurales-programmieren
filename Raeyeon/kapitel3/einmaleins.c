#include<stdio.h>

int main(){

    int i, y, z;

    printf("     |   1   2   3   4   5   6   7   8   9   10\n");
    printf("----------------------------------------------------\n");

    for(i=1; i<11; i++){

        if (i<10){
            printf("  %d  |", i);
        } else {
            printf(" %d  |", i);
        }

        for(y=1; y<11; y++){

            z = y*i;

            if(z<10){
                printf("   %d", z);
            } else {
                printf("  %d", z);
            } 

            if(y==10){
                printf("\n");
            }

        }


    }

    return 0;
}