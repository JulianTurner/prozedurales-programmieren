#include <stdio.h>
#include <stdlib.h>

void vertausche(int *x, int *y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int main() {
	int x = 1;
	int y = 2;

	vertausche(&x, &y);
	printf("x: %i, y: %i\n", x, y); // x: 2, y: 1
	return 0;
}
