#include <stdio.h>

int main() {

  unsigned short int min_unsigned_short_int = 0;
  unsigned short int max_unsigned_short_int = 65535;
  int min_int = -2147483648;
  int max_int = +2147483647;

  printf("unsiged short int: %hu - 1 = %hu\n", min_unsigned_short_int,
         min_unsigned_short_int - 1);

  printf("unsiged short int: %hu + 1 = %hu\n", max_unsigned_short_int,
         max_unsigned_short_int + 1);
  printf("int: %d - 1 = %d\n", min_int, min_int - 1);
  printf("int: %d + 1 = %d\n", max_int, max_int + 1);
  return 0;
}