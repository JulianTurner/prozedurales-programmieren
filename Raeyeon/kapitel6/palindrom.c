#include<stdio.h>
int main(){

    char wort[100]; //kein int
    int vorn, hinten;

    printf("Text : ");
    scanf("%s", wort);

    for(hinten = 0; wort[hinten] != 0; hinten++)
        ;
    
    for(vorn = 0, hinten--; vorn < hinten; vorn++, hinten--){
        if(wort[vorn] != wort[hinten]){
            break;
        }
    }

    if(vorn<hinten)
        printf("Kein Palindrom\n");
    else  
        printf("Palindrom\n");

    return 0;
}