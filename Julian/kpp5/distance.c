#include <stdio.h>

#define ANZAHL 5

int main() {
  int entfernung[ANZAHL][ANZAHL] = {
      {0, 2, 5, 9, 14}, {0, 0, 7, 15, 27}, {0, 0, 0, 9, 23},
      {0, 0, 0, 0, 12}, {0, 0, 0, 0, 0},
  };
  int ort1, ort2, dist;

  do {
    printf("Bitte den ersten Ort eingeben(1 - %d): ", ANZAHL);
    scanf("%d", &ort1);
    if (ort1 > 0 && ort1 <= ANZAHL) {
      break;
    }
    printf("Der Ort muss zwischen 1 und %d liegen", ANZAHL);
  } while (1);

  do {
    printf("Bitte den zweiten Ort eingeben(1 - %d): ", ANZAHL);
    scanf("%d", &ort2);
    if (ort2 > 0 && ort2 <= ANZAHL) {
      break;
    }
    printf("Der Ort muss zwischen 1 und %d liegen", ANZAHL);
  } while (1);

  dist = entfernung[ort1 - 1][ort2 - 1] + entfernung[ort2 - 1][ort1 - 1];

  printf("\nDie Entfernung von Ort %d nach Ort %d betraegt %d km.\n", ort1,
         ort2, dist);

  return 0;
}