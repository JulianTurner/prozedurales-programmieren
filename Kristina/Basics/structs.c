// data structure where we can store groups of data types
// you can model something in real world

#include <stdio.h>
#include <stdlib.h>

struct Student {
  char name[50];
  char major[50];
  int age;
  double gpa;
}

int main() {

  struct Student student1;
  // container student1 will be able to store name, major, age, gpa
  student1.age = 22;
  student1.gpa = 3.2;

  return 0;
}