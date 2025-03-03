#include <stdio.h>

int main(void) {
    // Example 1: Printing a 4x4 star pattern using nested loops.
    // Expected Output:
    // ****
    // ****
    // ****
    // ****
    printf("Example 1: 4x4 Star Pattern\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Example 2: Multiplication Table for numbers 1 to 3.
    // Expected Output:
    // 1 2 3 
    // 2 4 6 
    // 3 6 9
    printf("Example 2: Multiplication Table (1 to 3)\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    printf("\n");

    // Example 3: Right-angle triangle number pattern.
    // Expected Output:
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4
    printf("Example 3: Right-angle Triangle Number Pattern\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}