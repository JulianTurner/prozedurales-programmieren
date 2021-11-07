#include<stdio.h>

int main(){
    int lf, av, bo;

    printf("Lieferfähig?\n");
    scanf("%d", &lf);
    
    printf("Angaben vollständig?\n");
    scanf("%d", &av);

    printf("Bonität in Ordnung?\n");
    scanf("%d", &bo);
    
    /*if(lf){
        if(av){
            if(bo){
                printf("Lieferung mit Rechnung : 1\n");
                printf("Lieferung als Nachname : 0\n");
                printf("Angaben vervollständigen : 0\n");
                printf("Mitteilen : nicht lieferbar : 0");
            }else{
                printf("Lieferung mit Rechnung : 0\n");
                printf("Lieferung als Nachname : 1\n");
                printf("Angaben vervollständigen : 0\n");
                printf("Mitteilen : nicht lieferbar : 0");
            }
        }else{
            if(bo){
                printf("Lieferung mit Rechnung : 1\n");
                printf("Lieferung als Nachname : 0\n");
                printf("Angaben vervollständigen : 1\n");
                printf("Mitteilen : nicht lieferbar : 0");
            }else{
                printf("Lieferung mit Rechnung : 0\n");
                printf("Lieferung als Nachname : 1\n");
                printf("Angaben vervollständigen : 1\n");
                printf("Mitteilen : nicht lieferbar : 0");
            }
        }
    }else{
        printf("Lieferung mit Rechnung : 0\n");
        printf("Lieferung als Nachname : 0\n");
        printf("Angaben vervollständigen : 0\n");
        printf("Mitteilen : nicht lieferbar : 1");
    }*/

    if(lf&&bo){
        printf("Lieferung mit Rechnung\n");
    }
    if(lf&&!bo){
        printf("Lieferung als Nachnahme\n");
    }
    if(lf&&!av){
        printf("Angaben vervollständigen\n");
    }
    if(!lf){
        printf("Mitteilen : nicht lieferbar");
    }

    return 0;
}