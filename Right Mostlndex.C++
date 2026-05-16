#include <iostream>
using namespace std;

int rightMostIndex(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid;     // (index store)
            low = mid + 1;    //  (right side)
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int result = rightMostIndex(arr, n, key);

    if (result != -1)
        cout << "Rightmost index of " << key << " is: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}