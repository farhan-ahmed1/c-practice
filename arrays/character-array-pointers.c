// Character arrays and pointers
#include <stdio.h>
#include <string.h>
void print(char* C) 
{
    int i = 0;
    while(C[i] != '\0')
    {
        printf("%c", C[i]);
        i++;
    }
    printf("\n");

    // can also be done like this
    int j = 0;
    while(*(C+j) != '\0')
    {
        printf("%c", *(C+j));
        j++;
    }
    printf("\n");

    // another way it can be done
    while(*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");

}
int main()
{
    char C[4];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    printf("%s\n", C); // output: JOHN`4�l% 
    
    // how to fix
    char character[20]; // even if there 20 char, will only print until the null char is found
    character[0] = 'J';
    character[1] = 'O';
    character[2] = 'H';
    character[3] = 'N';
    character[4] = '\0';
    printf("%s\n", character); // output: prints JOHN as expected

    int len = strlen(character); // string methods also depend on the null terminator
    printf("Length = %d \n", len); // prints 4 because it stops counting after finding the null terminator. - all string methods do this

    // can  also be done like this 
    char character1[20] = "JOHN"; // valid
    char character2[] = "JOHN"; // also valid - size doesn't need to be specified
    char character3[5] = {'J', 'O', 'H', 'N','\0'}; // also valid but null char must be explict
    int len1 = strlen(character1);
    printf("%s\n", character1);

    printf("--------------------\n");
    char character4[20] = "Hello";
    print(character4);
}
