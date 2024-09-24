#include <iostream>
#include <ctime>
using namespace std;

// Binary search function
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            l = mid + 1;

        // If x is smaller, ignore right half
        else
            r = mid - 1;
    }

    // If element is not present in array
    return -1;
}

// Function to measure time of execution
void measureExecutionTime(int n) {
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i;  // Sorted array
    }

    int x = n - 1;  // Element to be searched (last element)

    clock_t start = clock();  // Start time

    int result = binarySearch(arr, 0, n - 1, x);

    clock_t end = clock();  // End time

    double time_taken = double(end - start) / CLOCKS_PER_SEC;

    if (result != -1) {
        cout << "Element found at index " << result << " in array of size " << n << endl;
    } else {
        cout << "Element not found in array of size " << n << endl;
    }
    cout << "Time taken for binary search: " << time_taken << " seconds" << endl;
}

int main() {
    measureExecutionTime(1000);
    measureExecutionTime(2000);
    measureExecutionTime(3000);

    return 0;
}
