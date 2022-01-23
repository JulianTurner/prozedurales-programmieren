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
        }
        }
    
    //min max
    int max = Array[0];
    int min = Array[0];
    for(i=0; i<size; i++){    
        if(max<=Array[i]){
            max = Array[i];
        }if(min>=Array[i]){
            min = Array[i];
        }
    }
    printf("Min : %d, Max : %d\n", min, max);
    

    //Durchschnitt
    int x = 0;
    double d;
    for(i=0; i<size; i++){
        x += Array[i];
    }
    d = (double) x/size;
    printf("Durchschnitt : %f", d);


    return 0;
}
