#include <stdio.h>

int main() {
    int choice;
    double amount, discount, total_amount;
    
   
    printf("Menu:\n");
    printf("1. Apple - Rs. 1,50,000/-\n");
    printf("2. Oneplus - Rs. 50,000/-\n");
    printf("3. Vivo - Rs. 40,000/-\n");
    printf("4. Oppo - Rs. 35,000/-\n");
    
   
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    
    switch(choice) {
        case 1:
            amount = 150000.0;
            break;
        case 2:
            amount = 50000.0;
            break;
        case 3:
            amount = 40000.0;
            break;
        case 4:
            amount = 35000.0;
            break;
        default:
            printf("Invalid choice.\n");
            return 1; 
    }
    
   
    total_amount = amount;
    if (total_amount > 300000.0) {
        discount = 0.10 * total_amount;
        total_amount -= discount;
        
        printf("Discount Applied!\n");
        printf("Amount: Rs. %.2f\n", amount);
        printf("Discount: Rs. %.2f\n", discount);
        printf("Total Amount after Discount: Rs. %.2f\n", total_amount);
    } else {
        printf("Amount: Rs. %.2f\n", amount);
    }
    
    return 0;
}

