// wap to accept an integer numbers and find reverse of this number and check this number for palindrome

#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    
    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    
    printf("Reverse = %d\n", reverse);
    
    if(original == reverse)
        printf("The number is a palindrome\n");
    else
        printf("The number is not a palindrome\n");
        
    return 0;
}
