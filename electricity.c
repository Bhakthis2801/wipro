#include <stdio.h>

int main() {
    float units, bill, surcharge = 0.0;

    // Input units consumed from user
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    // Calculate bill according to the given conditions
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Calculate surcharge (20% of the bill)
    surcharge = bill * 0.20;

    // Add surcharge to the bill
    bill += surcharge;

    // Display the total electricity bill
    printf("Total Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}

