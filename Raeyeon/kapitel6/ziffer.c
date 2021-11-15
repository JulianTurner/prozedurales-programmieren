#include<stdio.h>

int main(){

    char string[30];
    int x, i;

    printf("Gib Zahl ein : ");
    scanf("%s", string);

    //1234

    for(x=0, i=0; string[i] !=0 ; i++){
        x *= 10;
        x += string[i] - '0';
    }
    
    printf("%d", x);

    return 0;
}