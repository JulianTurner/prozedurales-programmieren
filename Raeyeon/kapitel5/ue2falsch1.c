#include<stdio.h>
int main(){

    int size, i, y;
    int Array[5];

    printf("Size : ");
    scanf("%d", &size); //kein \n in scanf

    if(size>5||size<0){
        printf("Fehler Gib noch mal ein. size soll positive Zahl, kleiner als 6 sein\n");
        scanf("%d", &size);
    }else{
        for(i=0; i<size; i++){
            scanf("%d", &y);
            Array[i] = y;
        }/*for(i=size; i<5; i++){
            Array[i] = 0;
        }*/for(i=0; i<size; i++){
            if(Array[i]<Array[i+1]){
                int x = Array[i+1];
                printf("Max : %d\n", x);
            }if(Array[i]>Array[i+1]){
                int x = Array[i];
                printf("Min : %d\n", x);
            }if(Array[i]=Array[i+1]){
                printf("kein min max\n");
            }
        }
        /*for(i=0; i<size; i++){
            printf("%d ", Array[i]);
        }*/
    }
    return 0;
}