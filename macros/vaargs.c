#include <stdio.h>
#include <stdarg.h>
// this is an exremely watered down version of printf. it prints ints, floats, chars
// and strings. we will not expect % nbefoer conversion specifiers. we
// will not print the contents of format strings. we will not suporrt
// modifiers to conversions.


#define LOG(format, ...) fprintf(log, format, __VA_ARGS__)
void printf3270 (const char *format, ...)
{
    va_list ap;
    va_start(ap, format);    
    
    
    while (*format)
    {
        switch (*format) {
            case 'd':
                printf("%d\t", va_arg(ap, int));
                break;
            case 's':
                printf("%s\t", va_arg(ap, char *));
                break;
            case 'c':
                printf("%c\t", va_arg(ap, int));
                break; 
            case 'f':
                printf("%f\t", va_arg(ap, double));
                break;
        }
        format++;
    }
    printf("\n");
    va_end(ap);

}
int main(int argc, char *argv[])
{

    printf3270("dscf", 189, "hello world", 'a', 3.14);

    return 0;
}

// next lesson - variadic macros
// variadic macros are a feature of the C preprocessor that allow for
// macros that accept a variable number of arguments. variadic macros