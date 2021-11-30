#include<stdio.h>

int main(){
    int i, j;
    int vigtabelle[26][26];

    for(i=0; i<26; i++){ //Das hier ist dein Offset
        char ersterBuchstabe = 'A' + i;
        for(j=0; j<26; j++){ //Mit diesem Zähler bestimmst du die Buchstaben hinter ersterBuchstabe pro Alphabet-Spalte
            char bestimmterBuchstabe = alphabetkorrektur(ersterBuchstabe + j);
            vigtabelle[j][i] = bestimmterBuchstabe;
        }
    }

}