#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int age = 40;
  double gpa = 3.6;
  char grade = 'A'; // storing only 1 single character!
  // special type:
  char phrase[] = "Text"; // what to sting a bunch of characters together
  printf("Hello\"You\" \n World\n");
  printf("My favorite %s is %d and %f\n", "number", 7, 3.14);

  int favNum = 10;
  printf("My fav number is %d, his grade is %c\n", favNum, grade);
  printf("%f\n", 5 / 4.1);
  printf("%d\n", 5 + 5);
  printf("%f\n", pow(2, 3)); // The value of 2 raised to 3rd power
  printf("%f\n", sqrt(36));
  printf("%f\n", ceil(36.356)); // will round the number up
  printf("%f\n", floor(36.65)); // round down
  // comments: /*(your comment) */
  int newAge;
  printf("Enter your age: \n");
  scanf("%d", &newAge); // & is called pointer
  printf("You are %d years old\n", newAge);

  double newGPA;
  printf("Enter your gpa: \n");
  scanf("%lf", &newGPA); // scan the function into double
  printf("Your gpa is %f\n", newGPA);

  /*const int num =
      5; // constant, num cannot be changed best practice - words in CAPS*/

  char newName[20]; // I need to tell C how many characters (memory), string
  printf("Enter your name: \n");
  scanf("%s",
        &newName); // scanf is not going to be able to read anything after space
  printf("Your name is %s\n", newName);

  char newGrade[1];
  printf("Enter your grade: ");
  scanf("%s", &newGrade);
  printf("\nYou grade is %s\n", newGrade);
  if (getchar() == '\n') // only want to compare to the character with ''
    printf("Whatever");  // also works getchar() w/o additional

  char fullName[20];
  printf("\nEnter your Full Name: ");
  fgets(fullName, 20, stdin); // limits the amount of characters, standart
                              // input (little console)
  printf("\nYou Name is %s olololo", fullName);

  return 0;
}