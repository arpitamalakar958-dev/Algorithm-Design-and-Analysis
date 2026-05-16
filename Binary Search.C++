include <iostream>
using namespace std;

int main() {

    // Sorted array (Binary Search works only on sorted arrays)
    int arr[] = {2, 5, 8, 12, 16, 23, 38};
    int n = 7;              // Size of the array
    int target = 16;        // The value we want to search

    int low = 0;            // Starting index
    int high = n - 1;       // Ending index
    int mid;                // Middle index

    bool found = false;     // To check whether element is found

    // Continue searching while low <= high
    while (low <= high) {

        mid = (low + high) / 2;   // Find the middle index

        if (arr[mid] == target) { // If target equals middle element
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;                // Exit the loop
        }
        else if (arr[mid] < target) {
            low = mid + 1;        // Search in the right half
        }
        else {
            high = mid - 1;       // Search in the left half
        }
    }

    // If element was not found
    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}