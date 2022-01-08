#include<stdio.h>
#include<stdlib.h>
int main(){
int *p;
int anz, i;

printf("Wie viele Zahlen : ");
scanf("%d", &anz);
p = (int*) malloc(anz*sizeof(int));

for(i=0; i<anz; i++){
    printf("%d. Zahl: ", i+1);
    scanf("%d", p+i);
}
for(i=anz-1; i>=0; i--){
    printf("%d\n", p[i]);
}

free(p);

return 0;}