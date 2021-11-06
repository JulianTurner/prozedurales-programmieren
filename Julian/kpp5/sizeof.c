#include <stdio.h>

int main() {

  printf("char: %ld\n", sizeof(char));
  printf("unsigned char: %ld\n", sizeof(unsigned char));

  printf("short: %ld\n", sizeof(short));
  printf("unsigned short: %ld\n", sizeof(unsigned short));

  printf("float: %ld\n", sizeof(float));

  printf("int: %ld\n", sizeof(int));
  printf("unsigned int: %ld\n", sizeof(unsigned int));

  printf("double: %ld\n", sizeof(double));

  printf("long: %ld\n", sizeof(long));
  printf("unsigned long: %ld\n", sizeof(unsigned long));

  printf("long long: %ld\n", sizeof(long long));
  printf("unsigned long long: %ld\n", sizeof(unsigned long long));

  printf("long double: %ld\n", sizeof(long double));

  return 0;
}