#include <stdio.h>
#include <stdlib.h>

// _____(1)
// _____Basic Calculator
// int main() {
//   double num1;
//   double num2;
//   printf("Enter first number: ");
//   scanf("%lf", &num1); // & - address
//   printf("Enter second number: ");
//   scanf("%lf", &num2);

//   printf("Answer: %f", num1 + num2);
//   return 0;
// }

// _____(2)
// _____"Advanced" Calculator
int main() {
  double num1;
  double num2;
  char operator;

  printf("Enter a number: ");
  scanf("%lf", &num1); // lf scans for the double!
  printf("Enter operator: ");
  scanf(" %c", &operator); // We have to put space
  printf("Enter a number: ");
  scanf("%lf", &num2);

  if (operator== '+') {
    printf("%f", num1 + num2);
  } else if (operator== '-') {
    printf("%f", num1 - num2);
  } else if (operator== '*') {
    printf("%f", num1 * num2);
  } else if (operator== '/') {
    printf("%f", num1 / num2);
  } else {
    printf("Invalid Operator");
  }
  return 0;
}