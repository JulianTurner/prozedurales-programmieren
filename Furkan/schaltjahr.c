#include <stdio.h>

int main () {
    int jahr;
    
    printf("Bitte geben sie eine Jahreszahl ein: "); 
    scanf("%d", &jahr);

    
    if (jahr % 4 == 0) {  
        if (jahr % 100 == 0) { 
            if (jahr % 400 == 0){
            printf("%d ist ein Schaltjahr\n", jahr);
        } else {
            printf("%d ist kein Schaltjahr\n", jahr);
        }
     } else {
        printf("%d ist ein Schaltjahr\n", jahr);
     }
    } else {
    printf("%d ist kein Schaltjahr\n", jahr);
}     
    return 0;
}