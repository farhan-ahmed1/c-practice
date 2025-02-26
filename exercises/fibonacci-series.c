#include <stdio.h>

int main() {
    int N, prev = 0, current = 1;
    scanf("%d", &N);

    // Print the first Fibonacci number if N is greater than 0
    if (N > 0) {
        printf("%d ", prev);
    }
    
    // Print the second Fibonacci number if N is greater than 1
    if (N > 1) {
        printf("%d ", current);
    }

    // Calculate and print the rest of the Fibonacci Series
    for (int i = 3; i <= N; i++) {
        int next = prev + current;
        printf("%d ", next);
        prev = current;
        current = next;
    }
    printf("\n");

    return 0;
}