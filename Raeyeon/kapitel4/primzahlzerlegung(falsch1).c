#include<stdio.h>

int main(){

    int zahl, i, p;

    printf("Zahl : ");
    scanf("%d", &zahl);
    printf("%d = ", zahl);

    for(i=2;i<zahl;i++){
        zahl%i;
        if(zahl%i==0){
            p=i;
            for(int j=i; j<zahl;j++){
                   zahl%p;
                if(zahl%p==0){
                    printf("%d*",p);
                }else{
                    break;
                }        
        }    
        }
    }

    return 0;
}