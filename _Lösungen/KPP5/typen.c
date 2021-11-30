#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("char: %lu\n", sizeof(char));
	printf("short: %lu\n", sizeof(short));
	printf("int: %lu\n", sizeof(int));
	printf("long: %lu\n", sizeof(long));
	printf("long long: %lu\n", sizeof(long long));

	printf( "float: %lu\n", sizeof(float));
	printf( "double: %lu\n", sizeof(double));
	printf( "long double %lu\n", sizeof(long double));
	return 0;
}
