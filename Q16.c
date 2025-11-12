//WAP to to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>
int main(){
  int a,b,quadrant;
  printf("Enter the value of x coordinate: ");
  scanf("%d", &a);
  printf("Enter the value of y coordinate: ");
  scanf("%d", &b);
  printf("The coordinate entered (%d,%d)\n", a,b);
  quadrant = (a > 0) ? ((b > 0) ? 1 : ((b < 0) ? 4 : 0)) : ((a < 0) ? ((b > 0) ? 2 : ((b < 0) ? 3 : 0)) : 0); 
  switch(quadrant){
    case 1:
      printf("The coordinate is in the first quadrant\n");
      break;
    case 2:
      printf("The coordinate is in the second quadrant\n");
      break;
    case 3:
      printf("The coordinate is in the third quadrant\n");
      break;
    case 4:
      printf("The coordinate is in the fourth quadrant\n");
      break;
    default:
      printf("The coordinate is at origin");
  }
}

