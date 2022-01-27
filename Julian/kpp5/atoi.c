#include <stdio.h>
#include <stdlib.h>

int main() {
  int first;
  int second;
  char buffer[50];
  printf("Zahl 1: ");
  fgets(buffer, 50, stdin);
  first = atoi(buffer);
  printf("Zahl 2: ");
  fgets(buffer, 50, stdin);
  second = atoi(buffer);

  printf("Summe = %i\n", first + second);
  return 0;
}