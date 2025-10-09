//Write a C program to check whether a triangle is right angles, obtuse, acute triangle.
#include <stdio.h>

int main() {
    float a, b, c, largest, x, y, z;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Is a triangle formed? 
    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        // Largest side?
        if (a >= b && a >= c) {
            largest = a;
            x = b;
            y = c;
        } else if (b >= a && b >= c) {
            largest = b;
            x = a;
            y = c;
        } else {
            largest = c;
            x = a;
            y = b;
        }

        // Comparison
        float lhs = largest * largest;
        float rhs = (x * x) + (y * y);

        if (lhs == rhs) {
            printf("The triangle is Right-angled.\n");
        } else if (lhs < rhs) {
            printf("The triangle is Acute.\n");
        } else {
            printf("The triangle is Obtuse.\n");
        }

    } else {
        printf("The given sides do NOT form a valid triangle.\n");
    }

    return 0;
}

