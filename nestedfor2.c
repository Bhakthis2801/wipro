#include <stdio.h>

int main() {
    int rows, spaces, stars;

    printf("Enter number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }

        // Print stars
        stars = 2 * i - 1; // Number of stars in current row
        for (int j = 1; j <= stars; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

