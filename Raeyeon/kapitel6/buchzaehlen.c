#include<stdio.h>

int main(){

    char string[100];
    char buchstabe;
    int i;
    int j=0;

    printf("Buchstabe : ");
    scanf("%c", &buchstabe);

    printf("Text : ");
    scanf("%s", string);


    for(i=0; string[i] !=0 ; i++){
        if(string[i]==buchstabe){
            j++;
        }
    }
    printf("Buchstabe %c ist %d mal verwendet geworden.", buchstabe, j);
    
    return 0;
}