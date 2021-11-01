#include <stdio.h>
#include <stdlib.h>

int main() {
  int luckyNumbers[] = {
      4,  8,  15,
      16, 23, 42}; // [] - telling C that we are storing multiple amt of info
  luckyNumbers[1] = 200;
  printf("%d", luckyNumbers[1]);

  // int unluckyNumbers[10]; // [] - how many elements
  // unluckyNumbers[1] = 80;
  // printf("%d", unluckyNumbers[1]);

  // char phrase [20] = "Array";

  return 0;
}