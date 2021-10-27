#include <stdio.h>
int main()
{
    int zahl;

    printf("Dieses Programm gibt die letzte Ziffer der eingegebenen Zahl aus\nBitte geben Sie nun eine Zahl ein: ");
    scanf("%d", &zahl);

    if (zahl > 0)
    {
        printf("Die eingegebene Zahl lautet: ""%d\n", zahl % 10);
    }
    else
    {
        printf("Die Zahl lautet 0");
    }
    return 0;
}