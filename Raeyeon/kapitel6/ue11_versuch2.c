#include<stdio.h>
#include<stdlib.h>

int main(){

    char wort[100];
    char *p[10];
    
    for(int i=0; i<10; i++){
        printf("Wort : ");
        //scanf("%s", wort);
        p = (char*)malloc(sizeof(char)*wort*10);
    }


    return 0;
}