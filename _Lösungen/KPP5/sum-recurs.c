#include <stdio.h>

int summiere(int list[], int laenge) {
	if (!laenge) {
    return 0;
	}
  return list[0] + summiere(&list[1], laenge-1);
}

int main() {
	int list[] = { 99, 17, 4, 22, 88 };

	printf("Die Summe ist %d\n", summiere(list, 5));
	return 0;
}
