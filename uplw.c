//C program that checks whether a given character is uppercase or lowercase:

#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is uppercase.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is lowercase.\n", ch);
    } else {
        printf("%c is not a letter.\n", ch);
    }

    return 0;
}

