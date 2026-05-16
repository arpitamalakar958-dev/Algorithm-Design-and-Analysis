#include <iostream>
#include <vector>
using namespace std;

// Function to find leftmost (first) index of target
int leftMostIndex(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int result = -1;  // If target not found, return -1

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoid overflow

        if (arr[mid] == target) {
            result = mid;       // Store current index
            high = mid - 1;     // Move left to find earlier occurrence
        }
        else if (arr[mid] < target) {
            low = mid + 1;      // Search right half
        }
        else {
            high = mid - 1;     // Search left half
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;

    int index = leftMostIndex(arr, target);

    if (index != -1)
        cout << "Left Most Index: " << index << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}