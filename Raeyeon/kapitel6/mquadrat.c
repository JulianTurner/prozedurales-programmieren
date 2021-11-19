#include<stdio.h>

int main(){

    int zahlen[5][5];
    int z, s, summe;

    printf("Gib 1-25 in Folge magisches Quadrats ein : ");

    for(z=0; z<5; z++){
        for(s=0; s<5; s++){
            scanf("%d", &zahlen[z][s]);
        }
    }

    for(z=0; z<5; z++){
            summe = 0;
        for(s=0; s<5; s++){
            summe += zahlen[z][s];
        }
        if(summe!=65){
            printf("Fehler");
            break;
        }
    }

    for(s=0; s<5; s++){
            summe = 0;
        for(z=0; z<5; z++){
            summe += zahlen[z][s];
        }
        if(summe!=65){
            printf("Fehler");
            break;
        }
    }

    for(summe=0, s=0; s<5; s++){
        summe += zahlen[s][s];
    }if(summe!=65){
        printf("Fehler");
    }

    for(summe=0, s=0; s<5; s++){
        summe += zahlen[4-s][s];
    }if(summe!=65){
        printf("Fehler");
    }

    return 0;
}