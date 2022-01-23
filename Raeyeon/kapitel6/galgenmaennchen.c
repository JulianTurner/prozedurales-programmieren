#include<stdio.h>

int main(){

    char wort[100], anzeige[100];
    char versuch;
    int nochzuraten, i, anzahl;

    printf("Wort : ");
    scanf("%s", wort);

    for(nochzuraten=0; wort[nochzuraten] !=0;  nochzuraten++)
        anzeige[nochzuraten] = '-';
    anzeige[nochzuraten]=0;

    for(anzahl=1; nochzuraten !=0; anzahl++){
        printf("%s\n", anzeige);
        printf("%d-ter Versuch: ", anzahl);

        scanf("\n%c", &versuch);

        for(i=0; wort[i] !=0; i++){
            if((wort[i]==versuch)&&(anzeige[i]=='-')){
                anzeige[i] = versuch;
                nochzuraten--;
            }
        }
    }
    printf("%s\n", anzeige);
    printf("Du hast %d Versuche benoetigt\n", anzahl-1);

    return 0;
}