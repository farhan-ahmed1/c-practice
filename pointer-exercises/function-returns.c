// Pointers as functions returns
#include <stdio.h>
#include <stdlib.h>
void PrintHelloWorld()
{
    printf("Hello World\n");
}

int* Add(int* a, int* b) // called function
{
    // a and b pointer to integers local to Add
    int* c = (int*)malloc(sizeof(int));
    printf("Address of a in Add = %d\n", &a);
    printf("Value in a of Add (address of a of main) = %d\n", a);
    printf("Value at address stored in a of Add = %d\n", *a);
    *c = (*a) + (*b);
    return c;
}
int main() // Calling function
{
    int a = 2, b = 4;
    printf("Address of a in main = %d\n", &a);

    // Call by reference
    int* ptr = Add(&a,&b); 
                      
    PrintHelloWorld();
    printf("Sum = %d\n", *ptr);
}