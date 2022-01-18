/*
Schreiben Sie eine Funktion, die als Parameter 1. einen Zeiger auf ein Array aus
Strings und 2. deren Anzahl bekommt. Sie soll einen Pointer auf einen von ihnen
zusammengesetzten String aus maximal den ersten 5 Buchstaben jedes Worts zurück
liefern.
Beachten Sie:
• Sie müssen die richtige Menge Speicher für den Zielstring reservieren
• Der Speicher kann dann später vom Aufrufer freigegeben werden (das ist hier
nicht ihre Aufgabe!)
• Bedenken Sie, dass maximal 5 Zeichen von jedem String übernommen werden, es
könnten auch weniger sein!

[][][][][]
[][][][][]
[][][][][]

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatStrings(char **inputStrings, int amount) {
  int charCount = 0;
  for (int stringNr = 0; stringNr < amount; stringNr++) {
    for (int charNr = 0; charNr < 5 && inputStrings[stringNr][charNr];
         charNr++) {
      charCount++;
    }
  }
  charCount++;

  char *output = (char *)malloc(charCount * sizeof(char));

  int writeIndex = 0;
  for (int stringNr = 0; stringNr < amount; stringNr++) {
    for (int charNr = 0; charNr < 5 && inputStrings[stringNr][charNr];
         charNr++) {
      output[writeIndex++] = inputStrings[stringNr][charNr];
    }
  }

  return output;
}

void cpyString(char *dest, char *source) {
  for (int index = 0; source[index]; index++) {
    dest[index] = source[index];
  }
}

int main() {
  /*char inputs[5][50] = malloc(sizeof(char[5][50]));
  cpyString(inputs[0], "acc");

  // inputs = {"acc", "defff", "gahjs", "asdfsiof", "psdijfuhkdgj"};

  char *output = concatStrings((char **)inputs, 5);
  printf("%s\n", output);

*/
  char inputStrings[5][50] = {"acc", "defff", "gahjs", "asdfsiof",
                              "psdijfuhkdgj"};
  int amount = 5;
  int charCount = 0;
  for (int stringNr = 0; stringNr < amount; stringNr++) {
    for (int charNr = 0; charNr < 5 && inputStrings[stringNr][charNr];
         charNr++) {
      charCount++;
    }
  }
  charCount++;

  char *output = (char *)malloc(charCount * sizeof(char));

  int writeIndex = 0;
  for (int stringNr = 0; stringNr < amount; stringNr++) {
    for (int charNr = 0; charNr < 5 && inputStrings[stringNr][charNr];
         charNr++) {
      output[writeIndex++] = inputStrings[stringNr][charNr];
    }
  }

  printf("%s\n", output);
  free(output);

  return 0;
}