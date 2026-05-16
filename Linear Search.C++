#include <iostream>

using namespace std;

int main()
{

    int arr[100], n, key; // arr = array, n = number of elements, key = value to search
    bool found = false;   // Flag variable (initially false)

    // Taking input for number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Taking input for array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Store values in array
    }

    // Taking input for the value to search
    cout << "Enter value to search: ";
    cin >> key;

    // Linear Search starts here
    for (int i = 0; i < n; i++)
    {

        // Compare each element with key
        if (arr[i] == key)
        {
            cout << "Value found at position: " << i + 1 << endl;
            found = true; // Mark as found
            break;        // Exit loop when found
        }
    }

    // If value is not found after checking all elements
    if (found == false)
    {
        cout << "Value not found in the array." << endl;
    }

    return 0; // End of program