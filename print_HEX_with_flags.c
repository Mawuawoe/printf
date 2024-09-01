#include "main.h"

int print_HEX_with_flags(va_list val, int flags)
{
    unsigned int n = va_arg(val, unsigned int);
    int count = 0;

    /* If the # flag is specified and the number is not zero, prepend '0X' */
    if (n != 0 && (flags & F_HASH))
    {
        count += _putchar('0');
        count += _putchar('X');
    }

    /* Now print the hexadecimal number in uppercase */
    count += print_HEX(val);  /* Call to your original print_HEX function */

    return (count);
}
