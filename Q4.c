/*
Write a C program that accepts two item’s weight (floating points' values) and number of
purchase (floating points' values) and calculate the average value of the items.
*/

#include <stdio.h>

int main() {
    float weight1, weight2;
    float a, b;
    float average;

    printf("Enter weight of item 1: ");
    scanf("%f", &weight1);

    printf("Enter number of item 1 purchased: ");
    scanf("%f", &a);

    printf("Enter weight of item 2: ");
    scanf("%f", &weight2);

    printf("Enter number of item 2 purchased: ");
    scanf("%f", &b);

    // weighted average
    average = ((weight1 * a) + (weight2 * b)) / (a + b);

    printf("The weighted average value of the items is: %.2f\n", average);

    return 0;
}

