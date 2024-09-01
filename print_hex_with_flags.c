#include "main.h"

int print_hex_with_flags(va_list val, int flags)
{
    unsigned int n = va_arg(val, unsigned int);
    int count = 0;

    /* If the # flag is specified and the number is not zero, prepend '0x' */
    if (n != 0 && (flags & F_HASH))
    {
        count += _putchar('0');
        count += _putchar('x');
    }

    /* Now print the hexadecimal number in lowercase */
    count += print_hex(val);  /* Call to your original print_hex function */

    return (count);
}
