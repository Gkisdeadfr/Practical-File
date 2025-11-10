// Write a program to find gross salary of employee if DA is 40% of basic Salary and HRA is 20%
// of basic salary. Basic salary will be entered as input by keyboard.

#include <stdio.h>

int main() {
    float basic_salary, da, hra, gross_salary;

    printf("--- Gross Salary Calculator ---\n");

    printf("Enter the Basic Salary (e.g., 50000): ");
    
    if (scanf("%f", &basic_salary) != 1 || basic_salary < 0) {
        printf("Error: Invalid or negative salary entered. Exiting.\n");
        return 1;
    }

    da = 0.40 * basic_salary;

    hra = 0.20 * basic_salary;

    gross_salary = basic_salary + da + hra;

    printf("\n--- Salary Breakdown ---\n");
    printf("Basic Salary:         %.2f\n", basic_salary);
    printf("DA (40%%):             %.2f\n", da);
    printf("HRA (20%%):            %.2f\n", hra);
    printf("------------------------------\n");
    printf("Gross Salary:         %.2f\n", gross_salary);

    return 0;
}
