#include <stdio.h>
#define MAXSIZE 100
int main (){

    int zahl;

    printf("Zahl : ");
    scanf("%d", &zahl);



    //finde alle Primzahlen von 2 bis zahl
    int primzahl[MAXSIZE];
    int schreibIndex = 0;
    /*primzahl[schreibIndex++]=5;  
    primzahl[schreibIndex++]=20; //primzahl[]={5,20, MÜll}*/

    for(int i=0; i<MAXSIZE; i++){
        primzahl[i] = 0; 
    }
   
    for (int i=2; i<=zahl; i++){
        int teilbar = 0; //falsch
        for (int j=0; primzahl[j] != 0; j++){
            if(i%primzahl[j] == 0){
                teilbar = 1; //richtig
                break;
            }
        }
        if(!teilbar){
            primzahl[schreibIndex++]=i; //Zahl i wird in das Array primzahl[] an die nächste freie Stelle geschrieben
        }
    }
  
  
    //Zerlegung von zahl in Primfaktoren

    int tempZahl = zahl;
    int primfaktoren[MAXSIZE];
    int primfaktorenSchreibIndex = 0;
    for(int i=0; i<MAXSIZE; i++){
        primfaktoren[i] = 0; 
    }
    while(tempZahl != 1){
        for(int primzahlIndex = 0; primzahl[primzahlIndex]!=0; primzahlIndex++){
            if(tempZahl%primzahl[primzahlIndex]==0){
                primfaktoren[primfaktorenSchreibIndex++]=primzahl[primzahlIndex];
                tempZahl /= primzahl[primzahlIndex];
                break;
            }
        }
    }

    printf("%d = ", zahl);
    for(int i=0; i<MAXSIZE && primfaktoren[i]!=0; i++){
        printf("%d", primfaktoren[i]);
        if(i+1<MAXSIZE && primfaktoren[i+1]!=0){
            printf("*");
        }
    }


    return 0;
}