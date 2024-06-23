//C program that finds the first and last digit of a number using loops:

#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;
    
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Find the last digit of the number
    lastDigit = number % 10;
    
    // Find the first digit of the number using a loop
    while (number >= 10) {
        number = number / 10;
    }
    firstDigit = number;
    
    // Output the first and last digit
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    
    return 0;
}

