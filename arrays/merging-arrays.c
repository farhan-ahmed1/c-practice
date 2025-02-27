/*
Merging two 1D arrays involves combining the elements of both arrays into a single array while maintaining their original order.

Here's a step-by-step process for merging two 1D arrays:

- Create a New Array: Create a new array that is large enough to hold the combined elements of both arrays. The size of the new array should be the sum of the sizes of the two original arrays.

- Copy Elements: Iterate through the elements of the first array and copy them to the new array. Then, iterate through the elements of the second array and copy them to the new array after the elements of the first array.

- Result: The new array now contains all the elements from both original arrays, merged in the desired order.
*/

#include <stdio.h>

int main() {
    int arr1[100] = {2, 4, 6}; // First array
    int size1 = 3;

    int arr2[100] = {8, 10, 12, 14}; // Second array
    int size2 = 4;

    // Update the code below to solve the problem
    int merged[200] = {};
    int mergedSize = size1 + size2;
    
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    
    for (int j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    }
    
    
    
    // Print the merged array
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
