#include<stdio.h>
#include<string.h>

int main(){

    typedef struct {
        char vorname[20];
        char nachname[30];
    } Name ;

    Name n[3];
    int i;
    int ve[3]={0,0,0};
    int ne[3]={0,0,0};

    for(int i=0; i<3; i++){
        printf("Geben Sie bitte die Name der %d. Person ein \n", i+1);
        printf("Vorname : ");
        scanf("%s", n[i].vorname);
        printf("Nachname : ");
        scanf("%s", n[i].nachname);
    }

    for(i=0; i<3; i++){
        for(int v=0; n[i].vorname[v]!=0; v++){
            if(n[i].vorname[v]<91){
                n[i].vorname[v]+=32;
            if(n[i].vorname[v]=='e'){
                ve[i]++;
            }
                n[i].vorname[v]-=32;
            }
            if(n[i].vorname[v]=='e'){
                ve[i]++;
            }
        }
        for(int m=0; n[i].nachname[m]!=0; m++){
            if(n[i].nachname[m]<91){
                n[i].nachname[m]+=32;
            if(n[i].nachname[m]=='e'){
                ne[i]++;
            }
                n[i].nachname[m]-=32;
            }
            if(n[i].nachname[m]=='e'){
                ne[i]++;
            }
        }
        if(ve[i]==ne[i]){
            printf("%s %s\n", n[i].vorname, n[i].nachname);
        }
    }

    return 0;
}