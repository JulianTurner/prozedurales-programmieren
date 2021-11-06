#include<stdio.h>

int main(){

    int A,B,C,D,E,F,G,H,a,b,c,d,e,f,g,h;
    int i;
    int primzahl[] = {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    // auf der Linken Seite muss immer etwas stehen, dem du etwas zuweisen kannst.
    // int = int / int
    // = : zuweisen, int AaIndex : deklarieren(nicht im Speicherplatz speichern)
    // Pointer : im Speicherplatz speichern, Array : Sammlung von Pointers

    for(int AaIndex = 0; AaIndex < 21; AaIndex++) {
        int Aa = primzahl[AaIndex];
        int A = Aa / 10;
        int a = Aa - (10 * A);
    for(int BbIndex = 0; BbIndex < 21; BbIndex++) {
        int Bb = primzahl[BbIndex];
        int B = Bb / 10;
        int b = Bb - (10 * B);
    for(int CcIndex = 0; CcIndex < 21; CcIndex++) {
        int Cc = primzahl[CcIndex];
        int C = Cc / 10;
        int c = Cc - (10 * C);
    for(int DdIndex = 0; DdIndex < 21; DdIndex++) {
        int Dd = primzahl[DdIndex];
        int D = Dd / 10;
        int d = Dd - (10 * D);
    for(int EeIndex = 0; EeIndex < 21; EeIndex++) {
        int Ee = primzahl[EeIndex];
        int E = Ee / 10;
        int e = Ee - (10 * E);
    for(int FfIndex = 0; FfIndex < 21; FfIndex++) {
        int Ff = primzahl[FfIndex];
        int F = Ff / 10;
        int f = Ff - (10 * F);
    for(int GgIndex = 0; GgIndex < 21; GgIndex++) {
        int Gg = primzahl[GgIndex];
        int G = Gg / 10;
        int g = Gg - (10 * G);
    for(int HhIndex = 0; HhIndex < 21; HhIndex++) {
        int Hh = primzahl[HhIndex];
        int H = Hh / 10;
        int h = Hh - (10 * H);


    if(
        (100*A+10*B+C)%(10*A+a)==0
        &&
        100*a+10*b+c==100*c+10*b+a
        &&
        100*C+10*D+E==(10*C+c)*(C+D+E)
        &&
        10*B+b==c+d+e
        &&
        (100*E+10*F+G)%(10*A+a)==0
        &&
        100*e+10*f+g==(10*A+a)*(e+f+g)
        &&
        100*G+10*H+A==(10*e+E)*(A+B+C)
        &&
        g+h+a==10*C+c){
       
       
        printf("A B C D E F G H : %d %d %d %d %d %d %d %d\n", A,B,C,D,E,F,G,H);
        printf("a b c d e f g h : %d %d %d %d %d %d %d %d", a,b,c,d,e,f,g,h);
    }
    }
    }
    }
    }
    }
    }
    }
    }



    return 0;
}