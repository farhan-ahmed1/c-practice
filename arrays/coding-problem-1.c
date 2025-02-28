/**
Coding problem - 1

    You are given the following as a user input:

    First line contains the integer N.
    The second line contains N space separated integers.
    The third line contains an integer X.
    
    You need to insert X as the 1st and last element and output the list.
    Your list will now have N+2 elements.
    Check the sample output for more details.

    Sample 1:
    Input                                   Output
    5                                   4 1 3 5 7 9 4
    1 3 5 7 9
    4
*/
#include <stdio.h>

int main() {
    int N, X;
    scanf("%d", &N); // Read the number of elements

    int arr[N + 2]; // Create an array with size N + 2

    // Read the N space separated integers and store them in the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i + 1]); // Start inserting from index 1
    }

    scanf("%d", &X); // Read the integer X

    // Insert X as the first element
    arr[0] = X;

    // Insert X as the last element
    arr[N + 1] = X;

    // Output the updated list
    for (int i = 0; i < N + 2; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}