#include<stdio.h>

int main() {

    int anzahl;
    int max, min, i, z;

    printf("Anzahl : ");
    scanf("%d", &anzahl);   

    for(i=1; i <= anzahl; i++){
        
        printf("%d. Zahl: ", i);
        scanf("%d", &z);
        
        if(i==1){
            min = z;
            max = z;
        }
        else{
            if(z<min)
            min = z;
            if(z>max)
            max = z;
        }

        printf("Minimum: %d\n", min);
        printf("Maximum: %d\n", max);

    }

    return 0;
}