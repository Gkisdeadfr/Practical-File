// Write a C program to find smallest of two numbers

#include <stdio.h>
int main(){
  int a,b;
  printf("Enter the 1st number: ");
  scanf("%d", &a);
  printf("Enter the 2nd number: ");
  scanf("%d", &b);
  if(a>b){
    printf("%d is greater than %d\n", a, b);
  }
  else{
      printf("%d is greater than %d\n", b, a);
    }
  return 0;
  }

