
#include <stdio.h>

int main() {
    int arr[100];
    int size, index;


    printf("Enter size of array: ");
    scanf("%d", &size);//size =  5

    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);//elements = 1,2,3,4,5
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter index of element to delete: ");
    scanf("%d", &index);//index = 2

    // Delete element at given index by shifting elements
    if (index < 0 || index >= size) {
        printf("Invalid index! Please enter a valid index.\n");
    } else {
//                     2         5
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
//iteration1 ----- arr[2]=arr[3]
//iteration2 ----- arr[3]=arr[4]
//iteration3 ----- loop ends
        }
        size--; // Decrease size of array after deletion //size changed to 4

        printf("Element deleted successfully.\n");

        // Print the updated array
        printf("Updated array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
