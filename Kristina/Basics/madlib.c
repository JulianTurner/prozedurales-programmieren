#include <stdio.h>
#include <stdlib.h>

int main() {
  char color[20];
  char pluralNoun[20];
  char celebrityF[20];
  char celebrityS[20];

  printf("Enter a color: ");
  scanf("%s", &color);
  printf("Enter a plural noun: ");
  scanf("%s", &pluralNoun);
  printf("Enter a celebrity (full name): ");
  scanf("%s%s", &celebrityF, celebrityS);

  printf("Roses are %s\n", color);
  printf("%s are blue\n", pluralNoun);
  printf("I love %s %s\n", celebrityF, celebrityS);

  return 0;
}