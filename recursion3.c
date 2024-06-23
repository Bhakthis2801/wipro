#include <stdio.h>

int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
   
    if (num <= 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        int sum = sumOfDigits(num);
        printf("Sum of digits of %d = %d\n", num, sum);
    }
   
    return 0;
}
