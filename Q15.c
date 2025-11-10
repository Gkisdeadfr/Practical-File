//WAP to calculate the root of a Quadratic Equation
#include <math.h>
#include <stdio.h>
int main(){
  int a,b,c,D,root1,root2;
  printf("Enter the coefficient of x2: ");
  scanf("%d", &a);
  printf("Enter the coefficient of x: ");
  scanf("%d", &b);
  printf("Enter the constant: ");
  scanf("%d", &c);
  D = (pow(b,2) - (4*a*c));
  root1 = ((((-1)*b) + (pow(b,(0.5))))/(2*a));
  root2 = ((((-1)*b) - (pow(b,(0.5))))/(2*a));
  printf("The roots are %d and %d\n", root1,root2);
}
