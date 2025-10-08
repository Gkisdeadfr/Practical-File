// Write a C program to swap two variables without using a third variable.
#include <stdio.h>

void arithmetic() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    //Swapping
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:  a = %d, b = %d\n", a, b);

}

#include <stdio.h>

void xor_method() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping
    a = a ^ b;   // Step 1: a now holds a XOR b
    b = a ^ b;   // Step 2: b becomes original a
    a = a ^ b;   // Step 3: a becomes original b

    printf("After swapping:  a = %d, b = %d\n", a, b);

}

int main() {
  int option;
  printf("Choose Swapping method\n");
  printf("Press 1 for arithmetic\n");
  printf("Press 2 for xor_method\n");
  printf("Your choice: ");
  scanf("%d", &option);
  if(option == 1) {
    arithmetic();
  }
  else if(option == 2) {
    xor_method();
  }
  else {
    printf("Invalid input, retry!\n");
    main();
  }

}
