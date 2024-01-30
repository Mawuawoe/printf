#include "main.h"

/*this code print a char*/

int print_c(va_list val)
{
    char str;

    str = va_arg(val, int);
    _putchar(str);
    return(1);
}