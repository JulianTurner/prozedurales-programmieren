#include<stdio.h>

int main(){
    int anton, berta, claus, doris;
    printf("Anton Berta Claus Doris\n");

    for(anton=0; anton<=1; anton++){
        for(berta=0; berta<=1; berta++){
            for(claus=0; claus<=1; claus++){
                for(doris=0; doris<=1; doris++){
                    if(anton==1&&claus==1){
                        berta = 0;
                    }if(berta==1){
                        claus = 1;
                    }if(doris==1){
                        anton = 0;
                    }if(anton==0){
                        if(doris==1){
                            claus=0;
                        }if(doris==0){
                            claus=1;
                        }
                    }
                }
            }
        }
        printf("  %d     %d     %d     %d\n", anton, berta, claus, doris);
    }
    return 0;
    
}