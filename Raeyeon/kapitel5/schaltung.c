#include<stdio.h>
int main(){
    int s1, s2, s3, s4, s5, s6, s7, lampe;

    printf("s1 s2 s3 s4 s5 s6 s7 Lampe\n");

    for(s1=0; s1<=1; s1++){
        for(s2=0; s2<=1; s2++){
        for(s3=0; s3<=1; s3++){
        for(s4=0; s4<=1; s4++){
        for(s5=0; s5<=1; s5++){
        for(s6=0; s6<=1; s6++){
        for(s7=0; s7<=1; s7++){
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
    }
    }
    }
    }
    }
    }
    }
    return 0;
}