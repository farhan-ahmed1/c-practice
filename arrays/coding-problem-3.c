/*
 * Coding Problem - 3
 * ------------------
 * You are given the following user input:
 *
 * 1. The first line contains two integers: N and X.
 * 2. The second line contains N space-separated integers (List 1).
 * 3. The third line contains X space-separated integers (List 2).
 *
 * Task:
 * -----
 * Merge the lists in the following order to produce a single list:
 *    List 1 + List 2 + List 1.
 *
 * Sample Test Cases:
 * ------------------
 * Sample 1:
 *   Input:
 *     5 5
 *     1 3 5 7 9
 *     1 2 3 4 5
 *   Output:
 *     1 3 5 7 9 1 2 3 4 5 1 3 5 7 9
 *
 * Sample 2:
 *   Input:
 *     5 3
 *     1 3 5 3 9
 *     3 2 1
 *   Output:
 *     1 3 5 3 9 3 2 1 1 3 5 3 9
 */

#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X); // Read the number of elements and X
    int list1[N + X + N]; // Create an array to hold List 1 + List 2 + List 1

    // Read the N space separated integers for List 1 and store them in the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &list1[i]);
    }

    // Read the X space separated integers for List 2 and store them in the array
    for (int i = N; i < N + X; i++) {
        scanf("%d", &list1[i]);
    }

    // Copy the elements of List 1 again after List 2
    for (int i = N + X; i < (N + X + N); i++) {
        list1[i] = list1[i - N - X];
    }

    // Output the merged list
    for (int i = 0; i < (2 * N + X); i++) {
        printf("%d ", list1[i]);
    }

    return 0;

    // test case 1
    // 5 5
    // 1 3 5 7 9
    // 1 2 3 4 5
    // 1 3 5 7 9 1 2 3 4 5 1 3 5 7 9
    
}