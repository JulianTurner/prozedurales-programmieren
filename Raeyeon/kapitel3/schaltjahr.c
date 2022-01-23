#include<stdio.h>

int main(){
    int tag, monat, jahr, i;
    printf("Datum : ");
    scanf("%d %d %d", &tag, &monat, &jahr);

    int lang = 31;
    int kurz = 30;
    char schaltjahr;

    if(((jahr%4==0)&&(jahr%100!=0))||(jahr%400==0)){
        char jahr = schaltjahr;
        printf("Schaltjahr\n");
    }else{
        printf("kein Schaltjahr\n");
    }

    for(i=0; i<monat; i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
            tag += lang;
        }if(i==4||i==6||i==9||i==11){
            tag += kurz;
        }if(jahr==schaltjahr&&i==2){
            tag += 29;
        }if(jahr!=schaltjahr&&i==2){
            tag += 28;
        }
        }


    printf("%d. Tag", tag);


    return 0;

}