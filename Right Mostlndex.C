
#include <stdio.h>

// Function to find the rightmost (last) index of target
int rightMostIndex(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;  // If target is not found, return -1

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;      // Store the index
            low = mid + 1;     // Move to the right side to find last occurrence
        }
        else if (arr[mid] < target) {
            low = mid + 1;     // Target is on the right side
        }
        else {
            high = mid - 1;    // Target is on the left side
        }
    }

    return result;  // Return the last occurrence index
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int index = rightMostIndex(arr, n, target);

    if (index != -1)
        printf("Right Most Index of %d is: %d\n", target, index);
    else
        printf("Element not found\n");

    return 0;
}