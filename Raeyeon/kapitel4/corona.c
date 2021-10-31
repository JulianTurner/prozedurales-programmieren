#include<stdio.h>

int main(){

    int gesund, krank, immun, gesamt, i;
    float infrate, immrate;

    FILE *fp;
    fp = fopen("corona.txt", "w");

    gesamt = 2000;
    krank = 10;
    gesund = 2000 - 10;
    immun = 0;
    infrate = 0.6;
    immrate = 0.06;

    printf("Gesamt Gesund Krank Immun\n");

    for (i=1; i<=25; i++) {
        gesund = gesund - infrate*gesund*krank/gesamt;
        immun = immun + immrate*krank;
        krank = gesamt - gesund - immun;

        printf("%d %d %d %d\n", gesamt, gesund, krank, immun);
        fprintf(fp, "%d %d %d %d\n", gesamt, gesund, krank, immun);

    }

    fclose(fp);



    return 0;
}