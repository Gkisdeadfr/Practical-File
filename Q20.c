//Write a program to find the factorial of any number.

#include <stdio.h>
int main() {
    int num;
    long long factorial = 1; // Use long long for the result to prevent overflow for larger factorials
    
    printf("--- Factorial Calculator ---\n");
    printf("Enter a non-negative integer: ");
    
    // Check for valid input
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Handle negative input
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } 
    // Handle the base case: 0! = 1
    else if (num == 0) {
        printf("\nThe factorial of 0 is 1.\n");
    } 
    // Calculate factorial for positive numbers
    else {
        // Iterate from 1 up to the number
        for (int i = 1; i <= num; i++) {
            // Check for potential overflow before multiplication (basic check)
            // Note: Factorials grow very fast, even 'long long' only handles up to 20!
            if (factorial > 0 && i > (9223372036854775807LL / factorial)) {
                 printf("\nWarning: The result for %d! is too large to fit in a standard 'long long' variable (Overflow occurred).\n", num);
                 // We stop the loop here to prevent incorrect calculation, but the print will still proceed.
                 // A more robust solution for larger numbers would require big integer libraries.
                 break; 
            }
            factorial *= i;
        }

        printf("\n--- Result ---\n");
        printf("The factorial of %d is %lld.\n", num, factorial);
    }
    
    return 0;
}
