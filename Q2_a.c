#include <stdio.h>
// WAP to calculate Area of a Circle.
#define PI 3.14
int main() {
  float radius, area;
  printf("Input the value of radius: ");
  scanf("%f", &radius);
  area = PI*radius*radius;
  printf("The area of the circle is: %.3f\n", area);
  

  return 0;
}
