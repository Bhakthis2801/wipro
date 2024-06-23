#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index if the target is found
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target=5;

    int index = binarySearch(arr, size, target);
    if (index == -1) {
        printf("Element %d not found in the array.\n", target);
    } else {
        printf("Element %d found at index %d.\n", target, index);
    }

    return 0;
}

