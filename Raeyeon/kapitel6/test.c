#include<stdio.h>

int main(){
    int i;

    char string[3]={'a', 'b', 'c'};

    for(i=0; string[i]!=0; i++){
        printf("%d", i);
    }
    printf("%d", i);

    return 0;
}