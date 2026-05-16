#include <iostream>
using namespace std;

int main() 
{
    int n;C
    // Take size of array from user
    cout << "Enter number of elements:5";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble Sort Algorithm
    for(int i = 0; i < n-1; i++)        // Number of passes
    {
        for(int j = 0; j < n-i-1; j++)  // Comparison in each pass
        {
            // Compare adjacent elements
            if(arr[j] > arr[j+1])
            {
                // Swap if left element is greater
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print sorted array
    cout << "Sorted array: 5,4";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "5 ";
    }

    return 0;
}