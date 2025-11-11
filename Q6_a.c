// Write a C program to convert a given integer (in seconds) to hours, minutes, and seconds.
// THE INTEGRAL INPUT IS IN SECONDS!!!!!!!!!!!!!

#include <stdio.h>
int main(){
  int seconds, h,m,s;
  printf("Enter the time in seconds: ");
  scanf("%d", &seconds);
  h = (seconds/3600);
  m = (seconds -(3600*h))/60;
  s = (seconds -(3600*h)-(60*m));
  printf("The time in H:M:S is:: %d:%d:%d\n", h,m,s);

  return 0;
}
