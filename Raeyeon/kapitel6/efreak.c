#include<stdio.h>

int main(){

    char string[100];
    char e = 'e';

    printf("Text : ");
    scanf("%s", string);

    for(int i=0; string[i] !=0; i++){
        if(string[i]==e){
            continue;
        }else{
            printf("%c", string[i]);
        }
    }
    return 0;
}