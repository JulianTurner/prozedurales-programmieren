#include<stdio.h>
int main(){

    int size;
    int array[];

    printf("Size : ");
    scanf("%d", &size);

    sizeof(array) = size;

    for(i=0; i<size; i++){
        scanf("%d", array[i]);
    }


    return 0;
}