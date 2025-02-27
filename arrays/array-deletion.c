/*
Deleting elements from a 1D array involves removing an element from a specific position within the array and then shifting the remaining elements to fill the gap.

Here's a step-by-step process for deleting elements from a 1D array:

- Determine the Position: Decide which element you want to delete from the array. You need to know the index (position) of the element you want to remove.

- Shift Elements: Starting from the position of the element to be deleted, move each element one position to the left until you reach the end of the array. This fills the gap left by the deleted element.

- Update Array Size: If your array is dynamically allocated or you're using a mechanism that tracks the size, decrease the size of the array to reflect the new number of elements.
*/
#include <stdio.h>

int main() {
    int arr[100] = {2, 4, 6, 8, 10}; // Initial array
    int size = 5; // Current size of the array

    int position_to_delete = 2; // Index of the element to delete

    // Update the code to shift elements to fill the gap left by the deleted element
    for (int i = position_to_delete; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Update the size of the array
    size--;

    // Print the updated array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}