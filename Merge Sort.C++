#include <iostream>
using namespace std;

// Merge function
void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[100];

    while (i <= mid && j <= right) {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (int i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}

// Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);      // left part
        mergeSort(arr, mid + 1, right); // right part

        merge(arr, left, mid, right);
    }
}

// Main function
int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: 3,9,10,27,38,43,82";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}