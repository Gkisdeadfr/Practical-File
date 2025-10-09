//Write a C program to check whether a number is even or odd.
#include <stdio.h>
int main() {
  int a;
  printf("Enter the number to be checked(except 0): ");
  scanf("%d",&a);
  if(a%2==0){
    printf("The number is even.");
  }
  else if(a%2!=0){
    printf("The number is odd.");
  }
  else{
    printf("Enter a valid integer other than zero");
  }
}
