#include <stdio.h>

// Function to check if a year is a leap year
int is_leap_year(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1; // The year is a leap year
            } else {
                return 0; // The year is not a leap year
            }
        } else {
            return 1; // The year is a leap year
        }
    } else {
        return 0; // The year is not a leap year
    }
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (is_leap_year(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

