#include<stdio.h>

int schaltung(int x){

    int power;
    
    for(x=0;x<=1;x++) {
        if (x == 0) {
            power = 0;
        } else {
            power = 1;
        }
        return power;
    }
}

int main(){
    int s1, s2, s3, s4, s5, s6, s7;
    s1 = schaltung(s1);
    s2 = schaltung(s2);
    s3 = schaltung(s3);
    s4 = schaltung(s4);
    s5 = schaltung(schaltung(s3));
    s6 = schaltung(s6);
    s7 = schaltung(s7);
    int lampe;
    printf("s1 s2 s3 s4 s5 s6 s7 Lampe\n");

    if(s1==1||s2==1){
        if(s3==1){
            if(s4==1||s7==1||(s6==0||s6==1)){
                int lampe = 1;
                printf("%d  %d  %d  %d  %d  %d  %d    %d\n", s1, s2, s3, s4, s5, s6, s7, lampe);
            }
        }else{
            if(s7==1){
                if(s6==1||s6==0){
                    int lampe = 1;
                    printf("%d  %d  %d  %d  %d  %d  %d    %d\n", s1, s2, s3, s4, s5, s6, s7, lampe);
                }
            }
        }
    }



    return 0;
}