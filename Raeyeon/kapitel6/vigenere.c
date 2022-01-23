#include<stdio.h>

/*char alphabetkorrektur(int alphabet);

int main(){

    //char a[26]={66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 65};

    char vigtabelle[26][26];
    int i, j;
    
    vigtabelle[0][0] = 66;
    for(i=0; i<26; i++){
        vigtabelle[i][j] = alphabetkorrektur(vigtabelle[i][j]);
        vigtabelle[i][j]++;
        for(j=0; j<26; j++){
            vigtabelle[i][j] = alphabetkorrektur(vigtabelle[i][j]);
            vigtabelle[i][j]++;
        }
    }

    for(i=0; i<26; i++){
        for(j=0; j<26; j++){
            printf("%s  ", vigtabelle);
        }
        printf("\n");
    }

    return 0;
}

char alphabetkorrektur(int alphabet){
    if(alphabet>90){
        return 65;
    }
    return alphabet;
}*/

int main(){

    char vigtab[26][26];
    int sum, i, j;

    vigtab[0][0]='B';
    sum = i+j;
    for(sum=0; sum<24; sum++){
        for(i=0; i<26; i++){
            vigtab[i][j]=vigtab[0][0]+i;
        }
    }
    vigtab[0][24]='A';
    for(sum=24; sum<51; sum++){
        for(i=0; i<26; i++){
            vigtab[i][j]=vigtab[0][24]+i;
        }
    }

    for(i=0; i<26; i++){
        for(j=0; j<26; j++){
            printf("%c  ", vigtab[i][j]);
        }
        printf("\n");
    }

    return 0;
}