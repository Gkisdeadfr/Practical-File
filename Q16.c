//WAP to to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>
int main(){
  int a,b;
  printf("Enter the value of x coordinate: ");
  scanf("%d", &a);
  printf("Enter the value of y coordinate: ");
  scanf("%d", &b);
  printf("The coordinate entered (%d,%d)", a,b);
  if(a>0 && b>0){
    printf("The coordinate lies in the first quadrant");
  }
  else if(a<0 && b>0){
    printf("The coordinate lies in the second quadrant");
  }
  else if(a<0 && b<0){
    printf("The coordinate lies in the third quadrant");
  }
  else if(a>0 && b<0){
    printf("The coordinate lies in the fourth quadrant");
  }
  else{
    printf("Enter a valid coordinate");
  }
}
