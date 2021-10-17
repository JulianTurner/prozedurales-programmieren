#include <stdio.h>
int main() {
    int eur;
    float dm;
    float Wechselkurs = 1.95583;

        printf("Geben Sie einen Euro Betrag ein, um in DM umzurechnen: ");
        scanf("%d", &eur); 
        printf("Das sind %f DM\n",&dm, eur * Wechselkurs);
    }