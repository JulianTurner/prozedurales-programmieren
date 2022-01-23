#include<stdio.h>

int main(){

    char wort[100];
    int vorn, hinten;

    printf("Wort : ");
    scanf("%s", wort);

    for(hinten=0; wort[hinten] !=0; hinten++)
        ;

    for(vorn=0, hinten--; vorn<hinten; vorn++, hinten--){
        if( (wort[vorn] | 0x20)!= (wort[hinten] | 0x20))
            break;
    }

    if(vorn<hinten)
        printf("Kein Palindrom");
    else
        printf("Palindrom");

    return 0;
}