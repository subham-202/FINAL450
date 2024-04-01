//CyclicallyRotateArrayByOne    
#include <iostream>
using namespace std;

// Function to rotate the array by one position to the right
void rotate(int arr[], int n) {
    int temp = arr[n - 1]; // Store the last element in a temporary variable
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; // Move each element one position to the right
    }
    arr[0] = temp; // Place the last element at the beginning
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Rotate the array
    rotate(arr, n);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
