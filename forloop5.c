#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer to calculate its factorial: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}

