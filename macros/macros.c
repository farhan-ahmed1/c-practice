// #include <stdio.h>
// value type macros
#define DARRAY_DEFAULT_CAPACITY 10
// function-type macros
#define min(x,y) (x < y ? x : y)

// curly braces enclose "basic blocks". basic blocks contain a scope.
// variables declared within a baasic lblock go out of scope at the end
// of the block.
// basic blocks have a value. theit value is the value of their last line
// however. basic blocks are not expressions! The trick is to 
// wrap the BB in parentheses, which transforms it into an expression
#define max(x, y) ({ \
    typeof (x) _x = (x); \
    typeof (y) _y = (y); \
    _x < _y ? _x : _y;   \
    // the backslash is a line continuation character because macros need to be on one line
    // the backslash tells the preprocessor to ignore the newline character
})

#define stringify(x) #x

#define concantenate(x) cmd_ ## x
int cmd_foo(int);
int cmd_bar(int);
int cmd_baz(int);
int cmd_zip(int);

typedef int (*fptr)(int);

struct lu_entry {
    const char *name;
    fptr func;
};

#define lu_value (name) {#name, cmd_ ## name}
struct lu_entry table[] = {
    lu_value(bar),
    lu_value(baz),
    lu_value(foo),
    //...
    lu_value(zip),

};

#define LOG(format, ...) fprintf(log, format, __VA_ARGS__)
// int b = 0b00000001; // binary - doesn't matter
int b = 0x069f0693; // hexidecimal
/**
 * Hexidecimal: Hexidecimal is base 16. it's binary for people
 * 
 *       base 10          base 16             base 2
 *       0                0                   0000
 *       1                1                   0001
 *       2                2                   0010
 *       3                3                   0011
 *       4                4                   0100
 *       5                5                   0101
 *       6                6                   0110
 *       7                7                   0111
 *       8                8                   1000
 *       9                9                   1001
 *       10               A                   1010
 *       11               B                   1011
 *       12               C                   1100
 *       13               D                   1101
 *       14               E                   1110
 *       15               F                   1111
 * 
 *  27 decimal 
 *  - in binary - 00011011
 *  - in hexidecimal - 1B
 */

/* Bitwise operator
    Bitwise and &: 011010
                  & 11100  
                  --------
                    011000   
    Bitwise or |: 011010
                 | 11100
                 --------
                   111000
    Bitwise xor ^: 011010
                  ^ 11100
                  --------
                    100010
    Bitwise complement (unary) ~: ~011010
                                   --------
                                    100101
*/

#define ATTRIBUTES_SMART        0x00000001
#define ATTRIBUTES_TUNNEL       0x00000002
#define ATTRIBUTES_ERRATIC      0x00000004
#define ATTRIBUTES_TELEPATHIC   0x00000008
#define ATTRIBUTES_MAGIC        0x00000010
#define ATTRIBUTES_BREATH       0x00000020

struct monster {
    int attributes;
} m;

if (m.attributes & ATTRIBUTES_TELEPATHIC) {
    // Monster is telepathic
}

if (m.attributes & ATTRIBUTES_TELEPATHIC | ATTRIBUTES_BREATH) {
    // Monster is telepathic or can breathe fire
}

// Monster is checks if monster m has attribute attr
#define M_IS(m, attr) (m -> attributes & ATTRIBUTES_ ## attr)

// can this monster tunnel through walls?
M_IS(m, TUNNEL);


int main (int argc, char *argv[])
{
    printf("%d\n", DARRAY_DEFAULT_CAPACITY);

    min(x, y);
    min(function_with_side_effects(), very_expensive_function());
    max(function_with_side_effects(), very_expensive_function());
    
    stringify(foo);

    bsearch(key, table, number of elements, sizeof element, comparitor) -> func(0);

    concantenate(foo);

    LOG("Error: %s\n", file, f, g, h);
    return 0;
}