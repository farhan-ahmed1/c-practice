#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//call back function should compare two integers, should return 1 if first element has
// higher rank, 0 if elementss are equal and -1 if second element has higher rank
int compare(int a, int b)
{
    if (a > b) {
        return -1;
    } else {
        return 1;
    }
}
int absolute_compare(int a, int b)
{
    if (abs(a) > abs(b))
    {
        return 1;
    } else {
        return -1;
    }
}
int compare_two(const void* a, const void* b)
{
    int A = *((int*)a); // typecasting to int* and getting value
    int B = *((int*)b);
    return abs(A) - abs(B);

}
void BubbleSort(int A[], int n, int (*compare) (int, int))
{
    // simple bubble sort algorithm
    int i, j, temp;
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n - 1; j++)
        {
            if (compare(A[j], A[j + 1]) > 0)
            { // compare A[j] with A[j + 1] and SWAP if needed
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            } 
        }
    }


}
int main()
{
    int i, A[] = {3,2,1,5,6,4}; // sort in increasing order => {1,2,3,4,5,6}
    BubbleSort(A, 6, compare);

    for (i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    int j, B[] = {-31, 22, -1, 50, -6, 4};
    BubbleSort(B, 6, absolute_compare);
    for (j = 0; j < 6; j++)
    {
        printf("%d ", B[j]);
    }
    printf("\n");
    int k, C[] = {-31, 22, -1, 50, -6, 4};
    qsort(C, 6, sizeof(int), compare_two);
    for (k = 0; k < 6; k++)
    {
        printf("%d ", C[k]);
    }
    printf("\n");

}