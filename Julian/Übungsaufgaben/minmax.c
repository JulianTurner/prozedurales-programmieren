#include <stdio.h>

int main() {
  // ein Programm dass eine vom Benutzer festgelegte Anzahl von Zahlen einliest
  // und anwschließend die größte und die kleinste der eingegeben Zahlen auf dem
  // Bildschirm ausgibt.
  int arraySize = 5, zahlen[arraySize], zahlHigh, zahlLow;
  printf(
      "Dieses Programm zeigt die höchte und niedgrigste Zahl aus %d Zahlen\n",
      arraySize);

  for (int i = 0; i < arraySize; i++) {
    int input;
    printf("\n%d von %d: ", 1 + i, arraySize);
    scanf("%d", &input);

    if (zahlLow > input) {
      zahlLow = input;
    }
    if (zahlHigh < input) {
      zahlHigh = input;
    }
  }
  printf("\nDie höchste Zahl ist %d und die niedgriste Zahl ist %d.\n",
         zahlHigh, zahlLow);

  if (zahlHigh == zahlLow) {
    printf("Sehr kreativ.\n");
  }

  printf("Das Prgramm ist zu ende.\n");
  return 0;
}