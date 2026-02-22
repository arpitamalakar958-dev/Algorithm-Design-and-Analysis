#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;

    // Take array size from user
    printf("Enter number of elements: 5");
    scanf("%d", &n);

    // Take array elements from user
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort logic
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            
            // Compare adjacent elements
            if(arr[j] > arr[j + 1]) {
                
                // Swap if elements are in wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}