#include <stdio.h>

// Explicitly declaring the functions at the top
void printArray(int arr[], int size);
void bubbleSort(int arr[], int n);

int main() {
    // Defines an array of integers
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    
    // Calculates the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Prints the original array
    printf("Original array: \n");
    printArray(arr, n); // Now explicitly declared, so no warning
    
    // Sorts the array using bubbleSort
    bubbleSort(arr, n);

    // Prints the sorted array
    printf("\nSorted array: \n");
    printArray(arr, n);
    return 0;
}

// Function to print the elements of an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]); // Prints each element of the array
    printf("\n"); // Moves to the next line after printing all elements
}

// Bubble Sort Implementation
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {     
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // If current element is greater than the next one, swap them
                temp = arr[j]; // Store the current element temporarily
                arr[j] = arr[j + 1]; // Move the next element to the current position
                arr[j + 1] = temp; // Place the stored element at the next position
            }
        }
    }
}
