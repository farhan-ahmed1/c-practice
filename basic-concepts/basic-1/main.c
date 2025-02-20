#include <stdio.h>
#include <limits.h>

int main () 
{
    /*
        1. Print name, DOB, and mobile number

        Write a C program to print your name, date of birth, and mobile number.
        Expected Output:

        Name   : Alexandra Abramov  
        DOB    : July 14, 1975  
        Mobile : 99-9999999999
    */
    printf("Exercise 1\n");
    printf("-------------------------------------------\n");

    printf("Name    : Alexandra Abramov\n");
    printf("DOB     : July %d, %d\n", 14, 1975);
    printf("Mobile  : %d-%ld\n", 99, 9999999999);

    printf("-------------------------------------------\n");
    
    /*
        2. Get the C version in use

        Write a C program to get the C version you are using.
        Expected Output:

        We are using C18!
    */
    printf("Exercise 2\n");
    printf("-------------------------------------------\n");

    printf("We are using %ld \n", __STDC_VERSION__);
    
    printf("-------------------------------------------\n");

    /*
        3. Print block 'F' and a large 'C'

        Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'.
        Expected Output:

        ######
        #
        #
        #####
        #
        #
        #
            ######
        ##      ##
        #
        #
        #
        #
        #
        ##      ##
            ######
    */
    printf("Exercise 3\n");
    printf("-------------------------------------------\n");
    
    printf("%lu \n", sizeof(char));

    int var1 = INT_MIN;
    int var2 = INT_MAX;

    printf("range of signed integer is from: %d to %d \n", var1, var2);

    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;

    printf("range of unsigned integer is from: %u to %u \n", var3, var4);

    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;

    printf("range of short signed integer is from: %d to %d \n", var5, var6);

    short unsigned int var7 = 0;
    short unsigned int var8 = USHRT_MAX;

    printf("range of short unsigned integer is from: %u to %u \n", var7, var8);

    printf("\n");
    printf("\n");
    printf("\n");

    unsigned int var = 4294967296;
    printf("%u \n", var);

    int var0 = -2147483649;
    printf("%d \n", var0);

    char str = 65;
    printf("%c \n", str);

    char str1 = 129;
    printf("%c", str1);
    printf("\n");


    float var10 = 3.1415926535897932;
    double var11 = 3.1415926535897932;
    long double var12 = 3.1415926535897932;
    printf("\n");

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));

    printf("\n");

    printf("%.16f\n", var10);
    printf("%.16f\n", var11);
    printf("%.21Lf\n", var12);


    return 0;
}



