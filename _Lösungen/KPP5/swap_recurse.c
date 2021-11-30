#include <stdio.h>
#include <stdlib.h>

void swap(int num[], int a, int b) {
	int tmp;
	if (b-a <= 1) {
		return;
	}
	tmp = num[a];
	num[a] = num[b];
	num[b] = tmp;
	swap(num, a+1, b-1);
}

int main() {
  int num[] = {9, 7, 3, 5, 11, 13, 15, 17};
	int len = sizeof(num) / sizeof(int);

	swap(num, 0, len-1);

	for (int i = 0; i<len; i++) {
		printf("Zahl %i: %i\n", i, num[i]);
	}
  return 0;
}
