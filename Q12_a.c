// Write a C program to check whether a character is an alphabet, digit.
#include <stdio.h>
#include <ctype.h>  // for isalpha() and isdigit()

void checkCharacter() {
    char ch;

    printf("Enter any character: ");
    scanf(" %c", &ch); // space before %c to ignore whitespace

    if (isalpha(ch)) {
        printf("'%c' is an alphabet.\n", ch);
    }
    else if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    }
    else {
        printf("'%c' is neither an alphabet nor a digit.\n", ch);
    }
}

int main() {
    checkCharacter();
    return 0;
}

