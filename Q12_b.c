// Write a C program a program to check whether an alphabet is a vowel or consonant.
#include <stdio.h>
#include <ctype.h> // For isalpha() and tolower()

// Function 1: Using if-else
void checkWithIf(char ch) {
    char lower_ch = tolower(ch);

    if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' ||
        lower_ch == 'o' || lower_ch == 'u') {
        printf("%c is a vowel (checked using if).\n", ch);
    } else {
        printf("%c is a consonant (checked using if).\n", ch);
    }
}

// Function 2: Using list (array)
void checkWithList(char ch) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    int isVowel = 0;
    char lower_ch = tolower(ch);

    for (int i = 0; i < 5; i++) {
        if (lower_ch == vowels[i]) {
            isVowel = 1;
            break;
        }
    }

    if (isVowel) {
        printf("%c is a vowel (checked using list).\n", ch);
    } else {
        printf("%c is a consonant (checked using list).\n", ch);
    }
}

// Recursive main logic
void runProgram() {
    int choice;
    char ch;

    // Display menu
    printf("\nChoose a method to check:\n");
    printf("1. Using if-else\n");
    printf("2. Using list (array)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Input character
    printf("Enter an alphabet: ");
    scanf(" %c", &ch); // Space before %c to skip leftover newline

    // Validate character input
    if (!isalpha(ch)) {
        printf("Invalid input! Please enter a valid alphabet.\n");
        runProgram(); // Recursive call for retry
        return;
    }

    // Call selected function
    if (choice == 1) {
        checkWithIf(ch);
    } else if (choice == 2) {
        checkWithList(ch);
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
        runProgram(); // Recursive call for retry
    }
}

// Main function
int main() {
    runProgram();
    return 0;
}

