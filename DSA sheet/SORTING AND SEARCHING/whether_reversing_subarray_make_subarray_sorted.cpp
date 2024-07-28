#include<bits/stdc++.h>
using namespace std;

bool sortArr(int arr[], int n){

    int x = -1;   //to store the start of unsorted segment
    int y = -1;   // to store last

    //identify the unsorted segment
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            if(x == -1){
                x = i;     // Set the start of the unsorted segment
            }
            y = i+1;   // Update the end of the unsorted segment
        }
    }

    //If an unsorted segment is found, reverse it
    if(x != -1){
        reverse(arr + x, arr + y+1);   

        //check if the array is sorted after reversing the segment
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
    }

    return true;
};

// Driver Program 
int main() 
{ 
    int arr[] = { 1, 2, 5, 4, 3 }; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the sortArr function and print the result
    sortArr(arr, n) ? (cout << "Yes" << endl) : (cout << "No" << endl); 
    return 0; 
} 



/*
Initial Setup:
Array: arr[] = {1, 2, 5, 4, 3}
Length of array, n = 5
Initialize x = -1 and y = -1
Step-by-Step Execution:
Identify Unsorted Segment:

Iterate through the array with the loop for (int i = 0; i < n - 1; i++).

Iteration 1:

i = 0
a[0] (1) <= a[1] (2), so continue.
Iteration 2:

i = 1
a[1] (2) <= a[2] (5), so continue.
Iteration 3:

i = 2
a[2] (5) > a[3] (4), so x is set to 2 (if x is not already set) and y is set to 3.
x = 2, y = 3
Iteration 4:

i = 3
a[3] (4) > a[4] (3), so y is updated to 4.
x = 2, y = 4
After the loop:

x = 2
y = 4
We identified that the segment from index 2 to 4 needs to be reversed.
Reverse the Segment:

Reverse the segment a + x to a + y + 1:
cpp
Copy code
reverse(a + x, a + y + 1);
This means reversing arr[2] to arr[4], which changes the array:
Original: arr[] = {1, 2, 5, 4, 3}
After reversing segment 5, 4, 3: arr[] = {1, 2, 3, 4, 5}
Check if Sorted:

Iterate through the array again with the loop for (int i = 0; i < n - 1; i++) to check if it is sorted.

Iteration 1:

i = 0
a[0] (1) <= a[1] (2), so continue.
Iteration 2:

i = 1
a[1] (2) <= a[2] (3), so continue.
Iteration 3:

i = 2
a[2] (3) <= a[3] (4), so continue.
Iteration 4:

i = 3
a[3] (4) <= a[4] (5), so continue.
Since the loop completes without finding any out-of-order elements, the function returns true.

Result:

The main function prints Yes because sortArr returned true.
*/
