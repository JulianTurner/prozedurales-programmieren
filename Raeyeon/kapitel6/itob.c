#include<stdio.h>

void itob(int n, int b, char s[200]){

    int schreibIndex = 0;
    int rest;

    while(n!=0){
        rest = n%b;
        n = n/b;
        s[schreibIndex]=rest + '0';
        schreibIndex++;
    }
    s[schreibIndex] = '\0';
 
}

int main(){

    int n, b;
    char s[200];

    printf("Zahl, Basis : ");
    scanf("%d", &n);
    scanf("%d", &b);

    itob(n, b, s);

    printf("%s\n", s);

    return 0;
}