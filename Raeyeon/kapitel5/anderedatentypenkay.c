#include <stdio.h>
#include <limits.h>

int main() {
    printf("size_t bytes %lu\n\n", sizeof(size_t));

    //char
    printf("unsigned char max: %u\n", UCHAR_MAX);
    printf("char min/max: %d / %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char min/max: %d / %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("char size byte(s): %lu\n", sizeof(char));

    printf("\n");

    //short int
    printf("unsigned short int max: %u\n", USHRT_MAX);
    printf("signed short int min/max: %d / %d\n", SHRT_MIN, SHRT_MAX);
    printf("short int size byte(s): %lu\n", sizeof(short int));

    printf("\n");

    //int
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("signed int min/max: %d / %d\n", INT_MIN, INT_MAX);
    printf("int size byte(s): %lu\n", sizeof(int));

    printf("\n");

    //long int
    printf("unsigned long int max: %lu\n", ULONG_MAX);
    printf("signed long int min/max: %ld / %ld\n", LONG_MIN, LONG_MAX);
    printf("long int size byte(s): %lu\n", sizeof(long int));

    printf("\n");

    //long long int
    printf("unsigned long long int max: %llu\n", ULLONG_MAX);
    printf("signed long long int min/max: %lld / %lld\n", LLONG_MIN, LLONG_MAX);
    printf("long long size byte(s): %lu\n", sizeof(long long));

    return 0;
}