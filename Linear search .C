# Algorithm-Design-and-analaysis 
   #include <stdio.h>

int main() {

    int arr[100], n, key;   // arr = array, n = number of elements, key = value to search
    int i;
    int found = 0;          // Flag variable (0 = not found, 1 = found)

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // Store values in array
    }

    // Input value to search
    printf("Enter value to search: ");
    scanf("%d", &key);

    // Linear Search starts here
    for(i = 0; i < n; i++) {

        // Compare each element with key
        if(arr[i] == key) {
            printf("Value found at position: %d\n", i + 1);
            found = 1;   // Mark as found
            break;       // Exit loop
        }
    }

    // If value is not found after checking all elements
    if(found == 0) {
        printf("Value not found in the array.\n");
    }

    return 0;   // End of program
}

    
       
           
           
          
   

   
   

 

