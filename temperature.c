//c program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the converted temperature
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

