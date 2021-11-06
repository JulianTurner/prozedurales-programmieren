#include <stdio.h>
int main (){

    int zahl;

    printf("Zahl : ");
    scanf("%d", &zahl);


    //finde alle Primzahlen von 2 bis zahl
    int primzahl[100];
    int schreibIndex = 0;
    /*primzahl[schreibIndex++]=5;  
    primzahl[schreibIndex++]=20; //primzahl[]={5,20, MÜll}*/

    for(int i=0; i<100; i++){
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

    for(int i=0; primzahl[i] != 0 ; i++){
        printf("%d \n", primzahl[i]);
    }



    return 0;
}