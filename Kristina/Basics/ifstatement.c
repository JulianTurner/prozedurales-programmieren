#include <stdio.h>
#include <stdlib.h>

// ______(1)
// int max(int num1, int num2) {
//   int result;
//   if (num1 > num2) {
//     result = num1;
//   } else {
//     result = num2;
//   }
//   return result;
// }

// int main() {
//   printf("%d", max(4, 10));
//   return 0;
// }
// ______(2)
// int max(int num1, int num2, int num3) {
//   int result;
//   if (num1 >= num2 && num1 >= num3) {
//     result = num1;
//   } else if (num2 >= num1 && num2 >= num3) {
//     result = num2;
//   } else {
//     result = num3;
//   }
//   return result;
// }

// int main() {
//   printf("%d", max(4, 10, 76));
//   return 0;
// }
//_______(3)
// int main() {
//   if (3 > 2 ||
//       2 > 5) { // Only 1 condition has to be true, || - OR: != - not Equal
//     printf("True");
//   } else {
//     printf("False");
//   }
//   return 0;
// }
//_______(4) Negation operator
int main() {
  if (!(3 > 2)) { // negation operationr - ! makes the whole thing false
    printf("True");
  } else {
    printf("False");
  }
  return 0;
}