#include <stdio.h>

int main() 
{
    int A[] = {2, 4, 5, 8, 1};
    printf("%d\n", A); // memory address of A. since its just A, it will point to the base of A
    printf("%d\n", &A[0]); // same thing as above. memory address of A at base or [0]
    printf("%d\n", A[0]); // value of A at index 0 
    printf("%d\n", *A); // same thing as above, dereferencing to find the value at index 0 or base zero
    int i;

    int  *p = A; // valid
    // A++; // invalid - compilation error
    p++; // valid
    
    for(i = 0; i < 5; i++) 
    {
        printf("Address = %d\n", &A[i]); // gives us the memory address of A at index i
        printf("Address = %d\n", A+i); // same- gives us the memory address of A at index i
        printf("Address = %d\n", A[i]); // value of A at index i
        printf("Address = %d\n", *(A+i)); // same - value of A at index i via deferencing

    }
}

