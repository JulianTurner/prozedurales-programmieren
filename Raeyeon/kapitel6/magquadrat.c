#include<stdio.h>
#define SIZE 5

int Indexkorrektur(int zahl);

int main(){

    int mquadrat[SIZE][SIZE];
    int i, x=0, y=SIZE/2;

    mquadrat[x][y] = 1;
    for(i=2; i<=SIZE*SIZE; i++){
        if((i-1)%SIZE!=0){
            x=Indexkorrektur(--x);
            y=Indexkorrektur(++y);
        }else{
            x=Indexkorrektur(++x);
        }
        mquadrat[x][y] = i;
    }

    for(int rowNr=0; rowNr<SIZE; rowNr++){
        for(int colNr=0; colNr<SIZE; colNr++){
            printf("%d", mquadrat[rowNr][colNr]);
            if(colNr<SIZE-1){
                printf(" ");
            }
        }
        if(rowNr<SIZE-1){
            printf("\n");
        }
    }

    return 0;
}

int Indexkorrektur(int zahl){
    //Array oben oder links verlassen
    if(zahl<0){
        return SIZE-1;
        //zahl = SIZE-1;
    }
    //Array rechts oder unten verlassen
    if(zahl>SIZE-1){
        return 0;
    }
    return zahl;
}