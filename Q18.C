// Write a program in C to calculate and print the Electricity bill of a given customer. The
// customer id and unit consumed by the user should be taken from the keyboard and display
// the total amount to pay to the customer.
// upto 199------------1.20
// 200-500-------------1.80
// Above 500----------2.00
// If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should
// be of Rs. 100/-
#include <stdio.h>

int main() {
    int customer_id;
    int units_consumed;
    float base_charge = 0.0;
    float final_bill = 0.0;
    float surcharge_rate = 0.15;
    
    // --- Input Phase ---
    printf("--- Electricity Bill Calculator ---\n");
    printf("Enter Customer ID: ");
    if (scanf("%d", &customer_id) != 1) {
        printf("Error: Invalid input for Customer ID.\n");
        return 1;
    }
    
    printf("Enter Units Consumed: ");
    if (scanf("%d", &units_consumed) != 1 || units_consumed < 0) {
        printf("Error: Invalid input for Units Consumed. Must be a non-negative integer.\n");
        return 1;
    }
    
    // --- Bill Calculation (Tiered Pricing) ---
    
    // Tier 3: Above 500 units (Rate 2.00)
    int remaining_units = units_consumed;
    
    if (remaining_units > 500) {
        base_charge += (remaining_units - 500) * 2.00;
        remaining_units = 500;
    }
    
    // Tier 2: 200 to 500 units (Rate 1.80)
    if (remaining_units > 199) {
        base_charge += (remaining_units - 199) * 1.80;
        remaining_units = 199;
    }
    
    // Tier 1: Up to 199 units (Rate 1.20)
    if (remaining_units > 0) {
        base_charge += remaining_units * 1.20;
    }
    
    // Apply Minimum Bill Clause
    if (base_charge < 100.0) {
        base_charge = 100.0;
    }
    
    final_bill = base_charge;
    float surcharge_amount = 0.0;
    
    // Apply Surcharge Clause
    if (base_charge > 400.0) {
        surcharge_amount = base_charge * surcharge_rate;
        final_bill += surcharge_amount;
    }
    
    // --- Output Phase ---
    printf("\n--- Customer Electricity Bill ---\n");
    printf("Customer ID:\t\t%d\n", customer_id);
    printf("Units Consumed:\t\t%d\n", units_consumed);
    printf("--------------------------------------\n");
    printf("Base Charge:\t\tRs. %.2f\n", base_charge);
    
    if (surcharge_amount > 0.0) {
        printf("Surcharge (15%%):\tRs. %.2f\n", surcharge_amount);
    }
    
    printf("--------------------------------------\n");
    printf("Total Amount Payable:\tRs. %.2f\n", final_bill);
    printf("--------------------------------------\n");

    return 0;
}
