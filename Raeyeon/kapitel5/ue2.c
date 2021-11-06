#include<stdio.h>
int main(){

    int size, i, x, y;
    int Array[x];

    printf("Size : ");
    scanf("%d\n", &size);

    if(size>5||size<0){
        printf("Fehler Gib noch mal ein\n");
    }else{
        for(i=0; i<size; i++){
            y = Array[i];
            scanf("%d", &y);
    }
    }

    return 0;
}