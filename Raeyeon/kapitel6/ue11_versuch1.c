#include<stdio.h>
#include<stdlib.h>

int main(){

    char *p;
    int anz, i;
    char wort;

    printf("Wie viele Wörter? : ");
    scanf("%d", &anz);
    if(anz>10){
        printf("Maximal 10 Wörter. Wie viele Wörter? : ");
        scanf("%d", &anz);
    }

    p = (char*)malloc(wort*sizeof(char));

    for(i=0; i<anz; i++){
        printf("%d. Wort : ", i+1);
        scanf("%c\n", p+i);
    }

    for(i=anz-1; i>0; i--){
        printf("%c", p[i]);
    }

    free(p);

    return 0;
}