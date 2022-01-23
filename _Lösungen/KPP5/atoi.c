#include <stdio.h>
#include <stdlib.h>
#define BUFLEN 256

int main() {
  int i;
  char buffer[BUFLEN];
  printf("Bitte geben Sie eine Zahl ein: ");
  fgets(buffer, BUFLEN, stdin);
  i = atoi(buffer);
  printf("Der Wert ist %d. Mal 2 sind das %d.\n", i, i * 2);
  return 0;
}
