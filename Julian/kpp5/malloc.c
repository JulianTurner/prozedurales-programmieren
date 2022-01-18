#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

int main() {
  //['a', 'b', 'c', '\n', '\0']
  char input[BUFFER_SIZE] = {'a', 'b', 'c', '\0'};
  //   fgets(input, BUFFER_SIZE, stdin);

  // länge des strings
  int i;

  // den string hochzählen
  for (i = 0; input[i] && i < BUFFER_SIZE; i++)
    ;

  // speicher für den output reservieren
  char *output = (char *)malloc(i * sizeof(char));

  // von output in den input kopieren
  for (int j; j <= i; j++) {
    output[j] = input[j];
  }

  // output ausgeben
  printf("%s\n", output);

  // output freigeben
  free(output);

  return 0;
}