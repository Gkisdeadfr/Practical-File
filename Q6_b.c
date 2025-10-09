// Write a C program to convert specified days into years, weeks, and days.
// Note: Ignore leap year.

#include <stdio.h>
int main(){
  int years, days, weeks;
  printf("Enter the time in days: ");
  scanf("%d", &days);
  years = days/365;
  days = days%365;
  weeks = days/7;
  days = days%7;
  printf("\nEquivalent to: %d year(s), %d week(s), and %d day(s)\n", years, weeks, days);

  return 0;
}
