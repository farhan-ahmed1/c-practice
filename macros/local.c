#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int *j;
    int *a[10];

    for (i = 0; i < 10; i++)
    {
        j =  malloc(sizeof(*j));
        *j = i;
        a[i] = j;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", *a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        free(a[i]);
    }
    return 0;
}