#include<stdio.h>

int main() {

    int h;
    int i;
    int sum=0;

    printf("Bitte geben Sie die Höhe h ein: ");
    scanf("%d", &h);
    
    for(i=1; i <= h ; i++) {
        
        sum = i+sum;  //sum += i;

    }


    printf("Die gesamten Legosteine : %d\n", sum);



    return 0;
}
