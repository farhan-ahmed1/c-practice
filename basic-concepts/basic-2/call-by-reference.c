#include <stdio.h>
void Increment_bad(int a) {
    a = a + 1;
}
// this is called call by value
int main_bad() {
    int a = 10;
    Increment_bad(a);
    printf("a = %d\n", a); // returns a = 10 which is not what we want
    return 0;
}

// we use a pointer to store the address of our variable so we can then accces its value and change it
void Increment_good(int *p) {
    *p = *p + 1;
}
// this is called call by reference
// calling it main but a better name would be main_good
int main() {
    int a = 10;
    // we must assign the address of a in order for our increment function to take that address and then access its value
    Increment_good(&a);
    printf("a = %d\n", a); // returns a = 11 which is what we want
    return 0;
}