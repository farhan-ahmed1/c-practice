/*
 * Problem Description:
 * --------------------
 * You are provided with the following input:
 *
 *   1. The first line contains an integer N.
 *   2. The second line contains N space-separated integers.
 *   3. The third line contains an integer X.
 *
 * Task:
 * -----
 * Remove all occurrences of X from the list of integers and output the resulting list.
 *
 * Sample Test Cases:
 * ------------------
 * Sample 1:
 *   Input:
 *     5
 *     1 3 5 7 9
 *     4
 *   Output:
 *     1 3 5 7 9
 *
 * Sample 2:
 *   Input:
 *     5
 *     1 3 5 3 9
 *     3
 *   Output:
 *     1 5 9
 */

#include <stdio.h>

int main() {
    int N, X;

    // Read the number of elements
    scanf("%d", &N); 

    // Declare the array after reading N
    int arr[N];

    // Read the N space-separated integers
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the integer X
    scanf("%d", &X);

    int new_size = 0; // New size of the updated list

    // Iterate through the array and copy non-X elements to the front
    for (int i = 0; i < N; i++) {
        if (arr[i] != X) {
            arr[new_size] = arr[i];
            new_size++;
        }
    }

    // Output the updated list
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}