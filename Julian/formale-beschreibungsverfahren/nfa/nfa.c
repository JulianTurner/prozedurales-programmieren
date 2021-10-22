#include <stdbool.h>
#include <stdio.h>

typedef struct Delta {
  char input[5];
  char destination[5];
} Delta;

typedef struct Node {
  char name[3];
  bool isStart;
  bool isFinish;
  Delta deltas[256];
  // q2, a
  // q2, b
  // q1, a
  // array delta[] = [{q2, a}, {q2,b}]
} Node;

int q0() {
  // if a
  // for each a go
  // a
  // a
  // if b
  // for each b go
  // b
  // b

  return 0;
}

int q1() {
  // if a
  // for each a go
  // a
  // a
  // if b
  // for each b go
  // b
  // b
  return 0;
}

// das input wort wäre a a b
int main() {
  // startzustände []
  // endzustände []

  //
  struct Node nodes[2] = {
      {"q1", true, false, "a", "Q2", "b", "Q3"},
      {"q2", true, false, "c", "Q5", "e", "Q6"},

  };

  for (int i = 0; i < 2; i++) {
    Node node = nodes[i];
    printf("\n%s\n", node.name);

    for (int j = 0; j <= 1; j++) {
      printf("Input: %s\n", node.deltas[j].input);
      printf("Destination: %s\n", node.deltas[j].destination);
    }
  }

  return 0;
}