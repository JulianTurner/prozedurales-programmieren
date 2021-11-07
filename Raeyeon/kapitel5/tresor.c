#include<stdio.h>
int main(){
    int s1, s2, s3, s4, s5, s6, s7, s8, s9;

    for(s1=0; s1<=1; s1++){
        for(s2=0; s2<=1; s2++){
            for(s3=0; s3<=1; s3++){
                for(s4=0; s4<=1; s4++){
                    for(s5=0; s5<=1; s5++){
                        for(s6=0; s6<=1; s6++){
                            for(s7=0; s7<=1; s7++){
                                for(s8=0; s8<=1; s8++){
                                    for(s9=0; s9<=1; s9++){
    if((!s3 || (!s7 && !s8)) && (s1 || (!s2 || !s4)) && (!s1 || !s6) && (s6 || (!s7 && s5)) && ((s9 || !s1) || !s3) && (s8 || s2) && ((s3 && !s6) || (!s8 && s4)) && (!s9 || (!s5 && s6)) && (s4 || (!s3 && s9))){
        printf("%d %d %d %d %d %d %d %d %d", s1, s2, s3, s4, s5, s6, s7, s8, s9);
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

// mein Ergebnis : 1 1 0 1 1 0 0 0 0