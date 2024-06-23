#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {5, 2, 8, 12, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int index = linearSearch(arr, size, target);
    if (index == -1) {
        printf("Element %d not found in the array.\n", target);
    } else {
        printf("Element %d found at index %d.\n", target, index);
    }

    return 0;
}

