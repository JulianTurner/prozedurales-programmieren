#include <stdio.h>
#include <stdlib.h>

// int main() {

//   printf("Top\n");
//   sayHi();
//   printf("Bottom\n");
//   return 0;
// }

// void sayHi() { printf("Hello User\n"); }

int main() {

  sayHi("Mike", 40);
  sayHi("Bob", 20);
  sayHi("Tom", 9);
  return 0;
}
void sayHi(char name[], int age) {
  printf("Hello %s, you are %d\n", name, age);
}