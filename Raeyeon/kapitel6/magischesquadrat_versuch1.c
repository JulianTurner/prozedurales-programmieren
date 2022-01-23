#include<stdio.h>

int main(){

    int i, j;
    int quadrat[5][5];

    for(i=0; i<5; i++){
        for(j=0; j<5, 0<quadrat[i][j]<26; j++){
            int fz = 0;
            fz += quadrat[i][j];
            if(fz == 65){
                continue;
            }
        }
    }

    printf("%d ", quadrat);

    return 0;
}
