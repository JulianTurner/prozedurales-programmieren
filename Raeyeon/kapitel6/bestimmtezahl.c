#include<stdio.h>

int main(){

    int zahlen[10];
    int zahl;

    for(int i=0; i<10; i++){
        printf("Gib die %d. Zahl ein : ", i+1);
        scanf("%d", &zahlen[i]);
    }

    printf("\nWelche Zahl soll ich ausgeben: ");
    scanf("%d", &zahl);

    zahl = zahl - 1;

    printf("Die %d. Zahl ist %d\n",zahl+1, zahlen[zahl]);

    return 0;
}