//Lassen Sie den Benutzer einen Betrag in EUR eingeben und zeigen Sie dann
// an, wie vielen DM das entspricht. 1 EUR = 1,95583 DM;
#include <stdio.h>
int main() {
  int zahl1;
  printf("Enter EUR amount ");
  scanf("%d", &zahl1);
  printf("%d EUR = %f DM \n", zahl1, zahl1 * 1.95583);
return 0;
}
