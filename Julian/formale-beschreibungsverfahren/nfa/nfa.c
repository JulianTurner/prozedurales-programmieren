#include <stdbool.h>
#include <stdio.h>

#define NODESCOUNT 1
#define DELTASCOUNT 5

typedef struct Delta {
  char input[5];
  char destination[5];
} Delta;

typedef struct Node {
  char name[3];
  bool isStart;
  bool isFinish;
  Delta deltas[DELTASCOUNT];
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

  // zustände
  // startzustände []
  // endzustände []
  struct Node nodes[NODESCOUNT] = {
      {"Q0",
       true,
       false,
       {{"a", "Q0"}, {"a", "Q1"}, {"a", "Q2"}, {"a", "Q3"}, {"a", "Q4"}}}};

  for (int i = 0; i < NODESCOUNT; i++) {
    Node node = nodes[i];
    printf("\n%s\n", node.name);

    for (int j = 0; j < DELTASCOUNT; j++) {
      printf("Input: %s\n", node.deltas[j].input);
      printf("Destination: %s\n", node.deltas[j].destination);
    }
  }

  return 0;
}