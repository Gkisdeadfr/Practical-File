// Write a program to find the area of triangle using herons formula.
#include <stdio.h>
#include <math.h>
int main(){
  float a,b,c,s,area;
  printf("Enter the value of a: ");
  scanf("%f", &a);
  printf("Enter the value of b: ");
  scanf("%f", &b);
  printf("Enter the value of c: ");
  scanf("%f", &c);
  s = (a+b+c)/2;
  area = sqrt((s)*(s-a)*(s-b)*(s-c));
  printf("The area of the triangle is: %.2f\n", area);
}
