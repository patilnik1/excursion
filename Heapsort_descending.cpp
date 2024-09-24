#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time() to seed the random number generator

using namespace std;

// Function to heapify a subtree rooted with node i (min-heapify for descending order)
void heapify(int arr[], int n, int i) {
    int smallest = i;    // Initialize smallest as root
    int left = 2 * i + 1;  // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // If left child is smaller than root
    if (left < n && arr[left] < arr[smallest])
        smallest = left;

    // If right child is smaller than the smallest so far
    if (right < n && arr[right] < arr[smallest])
        smallest = right;

    // If smallest is not root
    if (smallest != i) {
        swap(arr[i], arr[smallest]);

        // Recursively heapify the affected subtree
        heapify(arr, n, smallest);
    }
}

// Main function to do heap sort
void heapSort(int arr[], int n) {
    // Build min-heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call min heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

// Function to measure time of execution and print results
void measureExecutionTime(int n) {
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;  // Filling the array with random numbers
    }

    clock_t start = clock();  // Start time

    heapSort(arr, n);

    clock_t end = clock();  // End time

    double time_taken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Time taken for heap sort on array of size " << n << " in descending order: " << time_taken << " seconds" << endl;
}

int main() {
    // Measuring execution time for descending order
    measureExecutionTime(1000);
    measureExecutionTime(2000);
    measureExecutionTime(3000);

    return 0;
}
