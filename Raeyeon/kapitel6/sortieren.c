#include<stdio.h>

int main(){

    int zahlen[10];
    int x;

    for(int i=0; i<10; i++){
        printf("Gib die %d. Zahl ein : ", i+1);
        scanf("%d", &zahlen[i]);
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(j<i){
                if(zahlen[i]>zahlen[j]){
                    x = zahlen[j];
                    zahlen[j]=zahlen[i];
                    zahlen[i]=x;
                }
            }if(j>i){
                if(zahlen[i]<zahlen[j]){
                    x = zahlen[j];
                    zahlen[j]=zahlen[i];
                    zahlen[i]=x;
                }
            }
        }
    }

    for(int i=0; i<10; i++){
        printf("%d ", zahlen[i]);
    }

    return 0;
}