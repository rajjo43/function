#include <stdio.h>

// Function to find the largest element in an array
int findLargestElement(int arr[], int size) {
    int largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    int size;

    // Input the number of elements in the array
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements in the array
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Find the largest element using the function
    int largestElement = findLargestElement(arr, size);

    // Display the result
    printf("\nThe largest element in the array is: %d\n", largestElement);

    return 0;
}
