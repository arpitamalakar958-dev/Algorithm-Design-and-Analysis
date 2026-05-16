#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap
        swap(arr[i], arr[minIndex]);
    }

    // Print sorted array
    cout << "Sorted array: 11,12,22,25,64";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}