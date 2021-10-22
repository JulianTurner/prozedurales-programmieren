#include <stdbool.h>
#include <stdio.h>

struct Node {
  char name[3];
  bool isStart;
  bool isFinish;
};

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
  struct Node nodes[2] = {{"q1", true, false}, {"q2", false, true}};

  for (int i = 0; i <= 2; i++) {
    printf("%s\n", nodes[i].name);
  }

  return 0;
}