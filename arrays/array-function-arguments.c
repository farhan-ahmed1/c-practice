// Arrays as function arguments
#include <stdio.h>
int SumOfElements(int A[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++ )
    {
        sum += A[i];
    }
    return sum;

}
// good case - works
int main_good() 
{
    int A[] = {1,2,3,4,5};
    // find size of an array - returns number of elements in an array
    int size = sizeof(A) / sizeof(A[0]); 
    int total = SumOfElements(A, size);
    printf("Sum of elements =   %d\n", total); // returns 15 as expected
}    

// alternate case - we do not pass in a size element
int SumOfElements_good(int A[])
{
    int i, sum = 0;
    int size = sizeof(A) / sizeof(A[0]); 
    for (i = 0; i < size; i++ )
    {
        sum += A[i];
    }
    return sum;

}
int main() 
{
    int A[] = {1,2,3,4,5};
    // find size of an array - returns number of elements in an array
    int size = sizeof(A) / sizeof(A[0]); 
    int total = SumOfElements(A, size);
    printf("Sum of elements =   %d\n", total); // returns only 1
}    

