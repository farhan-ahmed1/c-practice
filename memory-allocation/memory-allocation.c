#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);

    int *A = (int*)malloc(n*sizeof(int)); // dynamically allocated memory - malloc
    int *B = (int*)calloc(n, sizeof(int)); // dynamically allocated memory - calloc

    for (int i = 0; i < n; i++) 
    {
        A[i] = i + 1;
    }
    free(A);
    A = NULL; // After free, adjust pointer to null
    A[2] = 6;

    int *C = (int*)realloc(A, 2*n*sizeof(int));

    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}