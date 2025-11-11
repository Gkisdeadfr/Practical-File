// A library charges a fine for every book returned late. For first 5 days the fine is 50 paisa, for
// 6-10 days, fine is one rupee and above 10 days, fine is 5 rupees. If you return the book after
// 30 days your membership will be cancelled. Write a program to accept the number of days
// the member is late to return the book and display the fine or appropriate message.
#include <stdio.h>

int main() {
    int days_late;
    float fine_amount = 0.0;
    
    printf("--- Library Fine Calculator ---\n");
    printf("Enter the number of days the book is late: ");
    
    // Check for valid input
    if (scanf("%d", &days_late) != 1 || days_late < 0) {
        printf("Error: Invalid input. Please enter a non-negative number of days.\n");
        return 1;
    }
    
    // --- Rule 4: Membership Cancellation ---
    if (days_late > 30) {
        printf("\nIMPORTANT MESSAGE:\n");
        printf("The book was returned %d days late. Your membership has been cancelled.\n", days_late);
    } 
    // --- Rule 1, 2, 3: Tiered Fine Calculation ---
    else if (days_late > 0) {
        int days_temp = days_late;

        // Tier 3: Above 10 days (Rate: 5.00 Rs/day)
        if (days_temp > 10) {
            fine_amount += (days_temp - 10) * 5.00;
            days_temp = 10;
        }

        // Tier 2: 6 to 10 days (Rate: 1.00 Rs/day)
        if (days_temp > 5) {
            fine_amount += (days_temp - 5) * 1.00;
            days_temp = 5;
        }
        
        // Tier 1: 1 to 5 days (Rate: 0.50 Rs/day)
        if (days_temp > 0) {
            fine_amount += days_temp * 0.50;
        }

        printf("\n--- Fine Calculation ---\n");
        printf("Days Late:\t\t%d days\n", days_late);
        printf("--------------------------------\n");
        printf("Total Fine Payable:\tRs. %.2f\n", fine_amount);
        printf("--------------------------------\n");

    } else {
        // Book returned on time (0 days late)
        printf("\nThank you for returning the book on time! No fine is incurred.\n");
    }
    
    return 0;
}
