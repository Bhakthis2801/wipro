#include <stdio.h>

int main() {
    char grade;

    
    printf("Enter the grade (A, B, C, D, E): ");
    scanf(" %c", &grade);

    
    switch (grade) {
        case 'A':
        
            printf("Excellent\n");
            break;
        case 'B':
        
            printf("Good\n");
            break;
        case 'C':
        
            printf("Average\n");
            break;
        case 'D':
        
            printf("Poor\n");
            break;
        case 'E':
        
            printf("Worse\n");
            break;
        default:
            printf("Invalid grade entered\n");
            break;
    }

    return 0;
}

