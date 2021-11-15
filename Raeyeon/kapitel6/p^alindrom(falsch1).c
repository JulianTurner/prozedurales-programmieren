#include<stdio.h>
#include<string.h>

int main(){

    char string[100];
    char unterscheiden[100];
    int i, s;

    printf("Text : ");
    scanf("%s", string);

    for(i=0; string[i] !=0; i++){
        continue;
    }
    for(s=0, i--; s<=i; i--, s++){
        if(string[s]!=string[i]){
            break;
        }
    } 

    if(s<i){
        printf("kein Palindrom");
    }else{
        printf("Palindrom");
    }

    return 0;
}