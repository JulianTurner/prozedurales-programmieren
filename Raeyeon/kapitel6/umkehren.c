#include<stdio.h>
#include<string.h>

int main(){

    char string[100];
    char gnirts[100];

    int i, j;

    printf("String : ");
    scanf("%s", string);

    int size = strlen(string);

    for(i=size-1, j=0; 0<=i ; i--, j++){
        gnirts[j] = string[i]; 
    }

    for(i=0; i<size; i++){
        if(gnirts[i])
            printf("%c", gnirts[i]);
    }

    return 0;
}
