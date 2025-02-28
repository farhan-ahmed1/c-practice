// Function Pointers in C
#include <stdio.h>
void PrintHelloWorld(char *name)
{
    printf("Hello %s\n", name);
}
int Add(int a, int b)
{
    return a + b;
}
int *Func1(int, int); // declaring a function that would return int * not the same as a function pointer
int (*Func2)(int, int); // if enclosed in parentheses, then it becomes declaring a function pointerr

int main()
{
    int c;
    // pointer to functionm that should take (int, int) as argument/parameter and return it
    int (*p)(int, int);
    // initializtion
    p = &Add; // & not needed - same thing
    c = ( p)(2,3); // dereferecing and excuting the function. *p not needed. p is enough
    printf("%d\n", c);

    void (*ptr)(char*);
    ptr = PrintHelloWorld; // could also have it be &PrintHelloWorld - same thing
    ptr("Tom");
}