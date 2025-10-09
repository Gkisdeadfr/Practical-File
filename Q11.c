// Write a C program to covert temperature from Fahrenheit to Celsius and Celsius to
// Fahrenheit (User must provide the choice of type of temperature)
#include <stdio.h>

void fahrenheitToCelsius() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f°C\n", c);
}

void celsiusToFahrenheit() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f°F\n", f);
}

int main() {
    int option;

    printf("Temperature Conversion Program\n");
    printf("------------------------------\n");
    printf("Press 1 for Fahrenheit → Celsius\n");
    printf("Press 2 for Celsius → Fahrenheit\n");
    printf("Your choice: ");
    scanf("%d", &option);

    if (option == 1) {
        fahrenheitToCelsius();
    }
    else if (option == 2) {
        celsiusToFahrenheit();
    }
    else {
        printf("Invalid input, retry!\n\n");
        main(); 
    }

    return 0;
}

