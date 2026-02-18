#include <stdio.h>

// Function to find the leftmost (first) index of target in sorted array
int leftMostIndex(int arr[], int n, int target) {
    int low = 0;          // starting index
    int high = n - 1;     // ending index
    int result = -1;      // store answer, -1 means not found

    while (low <= high) {
        int mid = low + (high - low) / 2;  // avoid overflow

        if (arr[mid] == target) {
            result = mid;      // store current index
            high = mid - 1;    // move left to find earlier occurrence
        }
        else if (arr[mid] < target) {
            low = mid + 1;     // search in right half
        }
        else {
            high = mid - 1;    // search in left half
        }
    }

    return result;   // return leftmost index or -1 if not found
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int index = leftMostIndex(arr, n, target);

    if (index != -1)
        printf("Leftmost index of %d is: %d\n", target, index);
    else
        printf("Element not found\n");

    return 0;
}
