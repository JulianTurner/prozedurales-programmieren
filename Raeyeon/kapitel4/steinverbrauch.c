#include<stdio.h>

int treppe(int n){
    int i;
    int k = 0;
        for(i=1; i<=n; i++){
            i = 2*i-1;
            k += i;
    }
    return k;
}

int fastpyramid(int n){
    int i;
    int j=0;
    int k=0;
    for(i=1; i<=n; i++){
        j += i;
        k += j;
    }
    return k;
}

int pyramid(int n){
    int i, j;
    int k = 0;
    for(i=1; i<=n; i++){
        j = i*i;
        k += j;
    }
    return k;
}

int main(){
    int n,x,y,z;

    printf("n = ");
    scanf("%d",&n);

    x = treppe(n);
    y = fastpyramid(n);
    z = pyramid(n);
    
    printf("Steinverbrauch\n1   2   3\n%d   %d   %d", x,y,z);



    return 0;
}