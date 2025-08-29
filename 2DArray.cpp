#include<bits/stdc++.h>    // Includes all standard C++ libraries
using namespace std;      // Use the standard namespace

int main (){
    int arr[3][5];        // Declare a 2D array with 3 rows and 5 columns
                          // Valid row indices: 0, 1, 2
                          // Valid column indices: 0, 1, 2, 3, 4

    cin >> arr[2][0];     // Take input for the element at row 2, column 0
                          // This is the first element of the last row

    cout << arr[2][0];    // Print the same element we just entered

    return 0;             // End of program
}
