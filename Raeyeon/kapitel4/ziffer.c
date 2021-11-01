#include<stdio.h>

int main(){

    int A,B,C,D,E,F,G,H,a,b,c,d,e,f,g,h;
    int i;
     
    //0<A&&B&&C&&D&&E&&F&&G&&H&&a&&b&&c&&d&&e&&f&&g&&h<10

    for(A=1; A<=9; A++){
        for(B=1; B<=9; B++){
            for(C=1; C<=9; C++){
                for(D=1; D<=9; D++){
                    for(E=1; E<=9; E++){
                        for(F=1; F<=9; F++){
                            for(G=1; G<=9; G++){
                                for(H=1; H<=9; H++){
    for(a=1; a<=9; a++){
        for(b=1; b<=9; b++){
            for(c=1; c<=9; c++){
                for(d=1; d<=9; d++){
                    for(e=1; e<=9; e++){
                        for(f=1; f<=9; f++){
                            for(g=1; g<=9; g++){
                                for(h=1; h<=9; h++){
    for (i=2; i<10*A+a; i++){
        10*A+a%i == 0;
        for (i=2; i<10*B+b; i++){
            10*B+b%i == 0;
            for (i=2; i<10*C+c; i++){
                10*C+c%i == 0;   
                for (i=2; i<10*D+d; i++){
                    10*D+d%i == 0;
                    for (i=2; i<10*E+e; i++){
                        10*E+e%i == 0;
                        for (i=2; i<10*F+f; i++){
                            10*F+f%i == 0;
                            for (i=2; i<10*G+g; i++){
                               10*G+g%i == 0;   
                               for (i=2; i<10*H+h; i++){
                                    10*H+h%i == 0;
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
    }    
    }   
    }   
    }        
    }   
    }
    }   
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