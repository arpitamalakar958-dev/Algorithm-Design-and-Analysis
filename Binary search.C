
#include <stdio.h>

int main() {

    // Sorted array (Binary Search works only on sorted arrays)
    int arr[] = {2, 5, 8, 12, 16, 23, 38};
    int n = 7;              // Size of the array
    int target = 16;        // Value to search

    int low = 0;            // Starting index
    int high = n - 1;       // Ending index
    int mid;                // Middle index
    int found = 0;          // 0 = not found, 1 = found

    // Continue searching while low <= high
    while (low <= high) {

        mid = (low + high) / 2;   // Calculate middle index

        if (arr[mid] == target) { // If target matches middle element
            printf("Element found at index: %d\n", mid);
            found = 1;
            break;                // Exit loop
        }
        else if (arr[mid] < target) {
            low = mid + 1;        // Search right half
        }
        else {
            high = mid - 1;       // Search left half
        }
    }

    // If element was not found
    if (found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
