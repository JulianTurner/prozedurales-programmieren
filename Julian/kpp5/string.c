/*
Aufgabe 2:
Ersetzen Sie alle „ei“ in einem String durch „eieiei“ (Achtung: Braucht mehr
Platz für neuen String! Wieviel?)
*/
#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 50

int main() {
  char input[STRING_SIZE] = "ein feines Heim";
  int length, eicount = 0;
  for (length = 0; input[length] && length < STRING_SIZE; length++) {
    if (input[length] == 'e' && input[length + 1] == 'i') {
      eicount++;
    }
  }

  char *output = (char *)malloc((length + 4 * eicount) * sizeof(char));
  int writeIndex = 0;
  for (int readIndex = 0; input[readIndex]; readIndex++) {
    output[writeIndex++] = input[readIndex];
    if (input[readIndex] == 'e' && input[readIndex + 1] == 'i') {
      output[writeIndex++] = input[++readIndex];
      output[writeIndex++] = 'e';
      output[writeIndex++] = 'i';
      output[writeIndex++] = 'e';
      output[writeIndex++] = 'i';
    }
  }
  output[writeIndex] = '\0';

  printf("%s\n", output);
  free(output);

  return 0;
}