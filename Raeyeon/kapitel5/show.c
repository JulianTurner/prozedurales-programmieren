#include<stdio.h>

//C에서는 참과 거짓을 0과 0이 아닌 다른 숫자를 통해 표현한다. 
//(0은 거짓, 그리고 그 외의 모든숫자는 참)

int tuwas1(){
    printf("tuwas1\n");
    return -1;
}

int tuwas2(){
    printf("tuwas2\n");
    return 12;
}

int main(){
    printf("Ergebnis : %d\n", tuwas1()&&tuwas2());
}

/*#define DEBUG_ENABLED 0

int main(){
    DEBUG_ENABLED && printf("ababa\n"); //printf wird nicht ausgeführt

    if(DEBUG_ENABLED){
        printf("ababa\n");
    }
}*/