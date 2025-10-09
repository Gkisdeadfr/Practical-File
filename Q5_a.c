// Write a C program to swap two variables using a third variable.
#include <stdio.h>
int main() {
  int a,b,c;
  printf("Enter the value of 1st variable a: ");
  scanf("%d", &a);
  printf("Enter the value of 2nd variable b: ");
  scanf("%d", &b);
  c=a;
  a=b;
  b=c;
  printf("After swapping:  a = %d, b = %d\n", a, b);


  return 0;
}
