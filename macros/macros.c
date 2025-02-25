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
#define mac(x, y) ({ \
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


}

int main (int argc, char *argv[])
{
    printf("%d\n", DARRAY_DEFAULT_CAPACITY);

    min(x, y);
    min(function_with_side_effects(), very_expensive_function());
    max(function_with_side_effects(), very_expensive_function());
    
    stringify(foo);

    bsearch(key, table, number of elements, sizeof element, comparitor) -> func(0);

    concantenate(foo);
    return 0;

}