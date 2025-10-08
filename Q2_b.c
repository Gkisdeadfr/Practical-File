// WAP for Simple Interest.

#include <stdio.h>
int main() {
  float p,r,t,SI;
  printf("Enter the principle amount: ");
  scanf("%f",&p);
  printf("Enter the rate of interest: ");
  scanf("%f",&r);
  printf("Enter the Time Period in yrs: ");
  scanf("%f",&t);

  SI=(p*r*t)/100;
  printf("The Simple Interest calculated is: %f\n", SI);

}
