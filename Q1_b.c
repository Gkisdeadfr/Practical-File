#include <stdio.h>
// Write a program to add three numbers.


int main() {
  int a,b,c,d;
  printf("Enter 1st number: ");
  scanf("%d", &a);
  printf("Enter 2nd number: ");
  scanf("%d", &b); 
  printf("Enter 3rd number: ");
  scanf("%d", &c); 
  d=a+b+c;
  printf("The sum of the three numbers is: %d\n", d);
 
  return 0;
}
