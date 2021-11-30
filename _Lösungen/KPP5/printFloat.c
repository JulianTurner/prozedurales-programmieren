#include <stdio.h>

int main() {
    float f = 1.0 / 7;
    double d = 1.0 / 7;
    printf("f: %.*e\n", 65, f);
    printf("d: %.*e\n", 65, d);
}
