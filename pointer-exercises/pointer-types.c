#include <stdio.h>

int main() 
{
    int a = 1025;
    int *p;

    p = &a;

    printf("size of integer is %d\n", sizeof(int));
    printf("Address = %d, value = %d \n", p, *p);
    printf("Address = %d, value = %d \n", p+1, *(p+1));
    char *p0;
    // p0 = p; // incorrect can't store address of integer in pointer of char
    p0 = (char *)p; // typecasting
    printf("size of char is %d\n", sizeof(char));
    printf("Address = %d, value = %d \n", p0, *p0);
    // 1025 = 00000000 00000000 00000100 <00000001> --> *p0 only points to the first byte so output is 1
    printf("Address = %d, value = %d \n", p0+1, *(p0+1));
    // 1025 = 00000000 00000000 <00000100> 00000001 --> *p0 now points to the second byte so output is 4


    // Void pointer - Generic pointer
    void *p1;
    p1 = p; // valid
    printf("Address = %d, value = %d \n", p1); // valid as void pointer doesn't know the type of data it is pointing to
    // printf("Address = %d, value = %d \n", p1, *p1); // invalid as void pointer doesn't know the type of data it is pointing to
    // printf("Address = %d, value = %d \n", p1+1, *(p1+1)); // invalid as void pointer doesn't know the type of data it is pointing to

    return 0;

}