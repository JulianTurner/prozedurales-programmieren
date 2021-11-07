#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
  // created at the top since there will be a conflicting error
  // another method is to create a "prototype"
  double result = num * num * num;
  return result;
  // or only return num*num*num;
  // after return printf wont work
}

int main() {
  printf("Answer : %f", cube(2.0));
  return 0;
}