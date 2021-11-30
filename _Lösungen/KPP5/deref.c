#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 42;
	int *p;

	p = &i;
	*p = *p / 2;
	printf("i: %i, *p: %i\n", i, *p); // i: 21, *p: 21
	return 0;
}
