#include<stdio.h>

int main(){
    int a = sizeof(char);
    int b = sizeof(short);
    int c = sizeof(int);
    int d = sizeof(double);
    int e = sizeof(long double);
    int f = sizeof(long);
    int g = sizeof(long long);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
    return 0;
}

//signed: 부호 있는 정수를 표현합니다. 보통 signed 키워드는 생략합니다.
//unsigned: 부호 없는 정수를 표현합니다. 따라서 값은 0부터 시작하게 됩니다.